@class NSDate;

@interface GPBTimestamp : GPBMessage

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) long long seconds;
@property (nonatomic) int nanos;

+ (id)descriptor;

- (id)initWithTimeIntervalSince1970:(double)a0;
- (id)initWithDate:(id)a0;

@end
