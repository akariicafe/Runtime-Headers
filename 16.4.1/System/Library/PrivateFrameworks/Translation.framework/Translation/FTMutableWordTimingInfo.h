@class NSString;

@interface FTMutableWordTimingInfo : FTWordTimingInfo

@property (copy, nonatomic) NSString *word;
@property (nonatomic) unsigned int sample_idx;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (nonatomic) float timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
