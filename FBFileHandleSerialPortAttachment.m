#import <FBFileHandleSerialPortAttachment.h>

@implementation VZFileHandleSerialPortAttachment

- (instancetype)initWithFileHandle:(NSFileHandle *)fileHandle {
    self = [super init];
    if (self) {
        _fileHandle = fileHandle;
    }
    return self;
}

@end
