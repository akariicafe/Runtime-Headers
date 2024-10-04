@class NSNumber;

@interface SetVolumeLevelIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSNumber *volumeLevel;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
