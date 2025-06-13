#import <Foundation/Foundation.h>
#import <FBBootLoader.h>
#import <FBEFIBootLoader.h>
#import <FBNetworkDeviceConfiguration.h>
#import <FBVirtioNetworkDeviceConfiguration.h>
#import <FBStorageDeviceConfiguration.h>
#import <FBDiskImageStorageDeviceAttachment.h>
#import <FBVirtioBlockDeviceConfiguration.h>
#import <FBEntropyDeviceConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@interface VZVirtualMachineConfiguration : NSObject

@property (nonatomic, assign) NSUInteger CPUCount;
@property (nonatomic, assign) NSUInteger memorySize;
@property (nonatomic, strong) VZBootLoader *bootLoader;

// TODO: These can later be typed to specific device config objects
@property (nonatomic, strong) NSArray<VZNetworkDeviceConfiguration *> *networkDevices;
@property (nonatomic, strong) NSArray<VZStorageDeviceConfiguration *> *storageDevices;
@property (nonatomic, strong, nullable) VZEntropyDeviceConfiguration *entropyDevice;

- (BOOL)validateWithError:(NSError **)error;

@end

NS_ASSUME_NONNULL_END

