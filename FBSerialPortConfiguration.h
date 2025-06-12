#import <Foundation/Foundation.h>

@class VZFileHandleSerialPortAttachment;

NS_ASSUME_NONNULL_BEGIN

@interface VZSerialPortConfiguration : NSObject

@property (nonatomic, strong) VZFileHandleSerialPortAttachment *attachment;
@property (nonatomic, assign) BOOL isConsole;

- (instancetype)initWithAttachment:(VZFileHandleSerialPortAttachment *)attachment;

@end

NS_ASSUME_NONNULL_END
