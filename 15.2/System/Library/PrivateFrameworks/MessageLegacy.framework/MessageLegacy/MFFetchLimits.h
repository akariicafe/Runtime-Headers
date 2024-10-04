@interface MFFetchLimits : NSObject

@property (nonatomic) unsigned long long fetchMinBytes;
@property (nonatomic) unsigned long long fetchMaxBytes;
@property (nonatomic) unsigned long long minBytesLeft;

- (id)description;
- (id)init;

@end
