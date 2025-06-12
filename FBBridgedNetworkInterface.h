#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VZBridgedNetworkInterface : NSObject

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *localizedDisplayName;

- (instancetype)initWithIdentifier:(NSString *)identifier displayName:(NSString *)displayName;

+ (NSArray<VZBridgedNetworkInterface *> *)allInterfaces;

@end

NS_ASSUME_NONNULL_END
