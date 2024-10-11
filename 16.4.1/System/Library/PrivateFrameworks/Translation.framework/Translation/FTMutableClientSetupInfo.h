@class NSString;

@interface FTMutableClientSetupInfo : FTClientSetupInfo

@property (nonatomic) float endpoint_threshold;
@property (nonatomic) BOOL endpoint_extra_delay;
@property (copy, nonatomic) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
