#import "FBDiskImageStorageDeviceAttachment.h"

@implementation VZDiskImageStorageDeviceAttachment

- (instancetype)initWithDiskImagePath:(NSString *)path readOnly:(BOOL)readOnly {
    self = [super init];
    if (self) {
        _diskImagePath = [path copy];
        _readOnly = readOnly;
    }
    return self;
}

@end
