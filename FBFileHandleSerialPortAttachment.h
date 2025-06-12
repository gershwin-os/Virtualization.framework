#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VZFileHandleSerialPortAttachment : NSObject

@property (nonatomic, strong, readonly) NSFileHandle *fileHandle;

- (instancetype)initWithFileHandle:(NSFileHandle *)fileHandle;

@end

NS_ASSUME_NONNULL_END
