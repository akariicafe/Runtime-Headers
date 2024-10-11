@class NSDate;

@interface MTMediaTimeTracker : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long position;
@property (nonatomic) float playbackRate;

- (void).cxx_destruct;
- (void)updatePosition:(unsigned long long)a0;
- (id)initWithPosition:(unsigned long long)a0 playbackRate:(float)a1;
- (id)estimatedTimeAtPastPosition:(unsigned long long)a0;
- (void)updatePosition:(unsigned long long)a0 playbackRate:(float)a1;
- (id)estimatedTimeAtPosition:(unsigned long long)a0;

@end
