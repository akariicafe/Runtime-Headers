@class NSString, NSDictionary;

@interface BWAutoFocusDriverShortStatisticsAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (retain, nonatomic) NSDictionary *afDriverShortStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id)eventDictionary;

@end
