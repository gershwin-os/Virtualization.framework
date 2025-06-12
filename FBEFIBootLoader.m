#import "FBEFIBootLoader.h"

@implementation VZEFIBootLoader

- (instancetype)initWithFirmwarePath:(NSString *)firmwarePath {
    self = [super init];
    if (self) {
        _firmwarePath = [firmwarePath copy];
    }
    return self;
}

@end
