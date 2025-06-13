#import <FBVirtioBlockDeviceConfiguration.h>

@implementation VZVirtioBlockDeviceConfiguration

- (instancetype)initWithAttachment:(VZDiskImageStorageDeviceAttachment *)attachment {
    self = [super init];
    if (self) {
        _attachment = attachment;
    }
    return self;
}

@end
