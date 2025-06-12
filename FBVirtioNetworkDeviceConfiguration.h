#import "FBNetworkDeviceConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface VZVirtioNetworkDeviceConfiguration : VZNetworkDeviceConfiguration

@property (nonatomic, copy) NSString *macAddress;
@property (nonatomic, copy) NSString *interfaceName; // e.g., "tap0", "bridge0"

- (instancetype)initWithInterfaceName:(NSString *)interfaceName
                           macAddress:(nullable NSString *)macAddress;

@end

NS_ASSUME_NONNULL_END
