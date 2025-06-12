#import <Foundation/Foundation.h>

@class VZVirtualMachine;

NS_ASSUME_NONNULL_BEGIN

@protocol VZVirtualMachineDelegate <NSObject>
@optional
- (void)virtualMachineDidStart:(VZVirtualMachine *)virtualMachine;
- (void)virtualMachineDidStop:(VZVirtualMachine *)virtualMachine;
- (void)virtualMachine:(VZVirtualMachine *)virtualMachine didFailWithError:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
