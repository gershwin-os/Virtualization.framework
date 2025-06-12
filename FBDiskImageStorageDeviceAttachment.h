#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VZDiskImageStorageDeviceAttachment : NSObject

@property (nonatomic, copy, readonly) NSString *diskImagePath;
@property (nonatomic, assign) BOOL readOnly;

- (instancetype)initWithDiskImagePath:(NSString *)path readOnly:(BOOL)readOnly;

@end

NS_ASSUME_NONNULL_END
