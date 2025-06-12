#import <Foundation/Foundation.h>
#import "FBVirtualMachineConfiguration.h"
#import "FBVirtualMachineState.h"
#import "FBVirtualMachineDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface VZVirtualMachine : NSObject

// Configuration provided at initialization
@property (nonatomic, strong, readonly) VZVirtualMachineConfiguration *configuration;

// Current lifecycle state of the VM
@property (nonatomic, assign, readonly) VZVirtualMachineState state;

// Delegate for lifecycle callbacks (optional)
@property (nonatomic, weak, nullable) id<VZVirtualMachineDelegate> delegate;

// Initialize with a full configuration object
- (instancetype)initWithConfiguration:(VZVirtualMachineConfiguration *)configuration;

// Start the virtual machine
- (void)startWithCompletionHandler:(void (^)(NSError * _Nullable error))completionHandler;

// Stop the virtual machine
- (void)stop;

// Convenience status check
- (BOOL)isRunning;

@end

NS_ASSUME_NONNULL_END

