#import "FBStorageDeviceConfiguration.h"
#import "FBDiskImageStorageDeviceAttachment.h"

NS_ASSUME_NONNULL_BEGIN

@interface VZVirtioBlockDeviceConfiguration : VZStorageDeviceConfiguration

@property (nonatomic, strong) VZDiskImageStorageDeviceAttachment *attachment;

- (instancetype)initWithAttachment:(VZDiskImageStorageDeviceAttachment *)attachment;

@end

NS_ASSUME_NONNULL_END
