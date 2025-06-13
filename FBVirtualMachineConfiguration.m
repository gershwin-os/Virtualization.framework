#import <FBVirtualMachineConfiguration.h>

@implementation VZVirtualMachineConfiguration

- (BOOL)validateWithError:(NSError **)error {
    if (self.CPUCount == 0 || self.memorySize == 0) {
        if (error) {
            *error = [NSError errorWithDomain:@"FBVirtualizationErrorDomain"
                                         code:1001
                                     userInfo:@{NSLocalizedDescriptionKey: @"CPU count and memory size must be greater than 0."}];
        }
        return NO;
    }
    return YES;
}

@end
