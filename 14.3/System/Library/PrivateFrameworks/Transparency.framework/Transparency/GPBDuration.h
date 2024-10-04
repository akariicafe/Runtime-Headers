@interface GPBDuration : GPBMessage

@property (nonatomic) double timeInterval;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) long long seconds;
@property (nonatomic) int nanos;

+ (id)descriptor;

- (id)initWithTimeIntervalSince1970:(double)a0;
- (id)initWithTimeInterval:(double)a0;

@end
