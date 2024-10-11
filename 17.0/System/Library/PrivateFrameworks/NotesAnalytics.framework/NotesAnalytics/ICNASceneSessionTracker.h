@class NSDate;

@interface ICNASceneSessionTracker : NSObject

@property (nonatomic) long long sessionTypeEnum;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *lastStartDate;
@property (nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL timerIsOn;

- (void)startTimer;
- (void).cxx_destruct;
- (void)endTimer;
- (id)initWithSessionTypeEnum:(long long)a0;
- (id)sessionSummaryItemData;

@end
