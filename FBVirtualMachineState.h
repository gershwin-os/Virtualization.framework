#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, VZVirtualMachineState) {
    VZVirtualMachineStateStopped = 0,
    VZVirtualMachineStateRunning = 1,
    VZVirtualMachineStatePaused  = 2,
    VZVirtualMachineStateError   = 3,
};
