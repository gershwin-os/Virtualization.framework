#import "FBSerialPortConfiguration.h"
#import "FBFileHandleSerialPortAttachment.h"

@implementation VZSerialPortConfiguration

- (instancetype)initWithAttachment:(VZFileHandleSerialPortAttachment *)attachment {
    self = [super init];
    if (self) {
        _attachment = attachment;
        _isConsole = YES;
    }
    return self;
}

@end
