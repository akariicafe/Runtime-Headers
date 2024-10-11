@interface MTHLSRollItem : MTHLSItem

@property (nonatomic) unsigned long long duration;

- (id)initWithStartOverallPosition:(unsigned long long)a0 duration:(unsigned long long)a1 metricsData:(id)a2;
- (BOOL)containsOverallPosition:(unsigned long long)a0;
- (unsigned long long)endOverallPosition;

@end
