#import "FBVirtioNetworkDeviceConfiguration.h"

@implementation VZVirtioNetworkDeviceConfiguration

- (instancetype)initWithInterfaceName:(NSString *)interfaceName
                           macAddress:(nullable NSString *)macAddress {
    self = [super init];
    if (self) {
        _interfaceName = [interfaceName copy];
        _macAddress = macAddress ? [macAddress copy] : @"52:54:00:12:34:56"; // default fallback
    }
    return self;
}

@end
