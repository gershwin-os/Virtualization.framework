#import <FBVirtualMachine.h>
#import <FBVirtualMachineDelegate.h>
#import <FBVirtualMachineState.h>

@interface VZVirtualMachine ()
@property (nonatomic, strong) VZVirtualMachineConfiguration *configuration;
@property (nonatomic, assign) VZVirtualMachineState state;
@end

@implementation VZVirtualMachine

@synthesize delegate = _delegate;

- (instancetype)initWithConfiguration:(VZVirtualMachineConfiguration *)configuration {
    self = [super init];
    if (self) {
        _configuration = configuration;
        _state = VZVirtualMachineStateStopped;
    }
    return self;
}

- (VZVirtualMachineState)state {
    return _state;
}

- (BOOL)isRunning {
    return _state == VZVirtualMachineStateRunning;
}

- (void)startWithCompletionHandler:(void (^)(NSError * _Nullable error))completionHandler {
    NSError *validationError = nil;
    if (![self.configuration validateWithError:&validationError]) {
        _state = VZVirtualMachineStateError;
        if (_delegate && [_delegate respondsToSelector:@selector(virtualMachine:didFailWithError:)]) {
            [_delegate virtualMachine:self didFailWithError:validationError];
        }
        completionHandler(validationError);
        return;
    }

    // TODO: Launch actual bhyve process here.
    _state = VZVirtualMachineStateRunning;

    if (_delegate && [_delegate respondsToSelector:@selector(virtualMachineDidStart:)]) {
        [_delegate virtualMachineDidStart:self];
    }

    completionHandler(nil);
}

- (void)stop {
    // TODO: Shut down the bhyve process here.
    _state = VZVirtualMachineStateStopped;

    if (_delegate && [_delegate respondsToSelector:@selector(virtualMachineDidStop:)]) {
        [_delegate virtualMachineDidStop:self];
    }
}

@end
