#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VZEFIBootLoader : NSObject

@property (nonatomic, copy) NSString *firmwarePath;

- (instancetype)initWithFirmwarePath:(NSString *)firmwarePath;

@end

NS_ASSUME_NONNULL_END
