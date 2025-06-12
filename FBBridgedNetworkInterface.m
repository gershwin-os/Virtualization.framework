#import "FBBridgedNetworkInterface.h"

@implementation VZBridgedNetworkInterface

- (instancetype)initWithIdentifier:(NSString *)identifier displayName:(NSString *)displayName {
    self = [super init];
    if (self) {
        _identifier = [identifier copy];
        _localizedDisplayName = [displayName copy];
    }
    return self;
}

+ (NSArray<VZBridgedNetworkInterface *> *)allInterfaces {
    NSMutableArray *result = [NSMutableArray array];

    NSPipe *pipe = [NSPipe pipe];
    NSTask *task = [[NSTask alloc] init];
    [task setLaunchPath:@"/sbin/ifconfig"];
    [task setArguments:@[]];
    [task setStandardOutput:pipe];

    NSFileHandle *readHandle = [pipe fileHandleForReading];
    [task launch];

    NSData *outputData = [readHandle readDataToEndOfFile];
    [task waitUntilExit];

    NSString *output = [[NSString alloc] initWithData:outputData encoding:NSUTF8StringEncoding];
    NSArray *lines = [output componentsSeparatedByString:@"\n"];

    for (NSString *line in lines) {
        if ([line hasPrefix:@"\t"] || line.length == 0) continue;

        NSScanner *scanner = [NSScanner scannerWithString:line];
        NSString *iface = nil;
        [scanner scanUpToString:@":" intoString:&iface];
        if (iface) {
            NSString *display = [NSString stringWithFormat:@"Interface %@", iface];
            VZBridgedNetworkInterface *obj = [[VZBridgedNetworkInterface alloc] initWithIdentifier:iface displayName:display];
            [result addObject:obj];
        }
    }

    return result;
}

@end
