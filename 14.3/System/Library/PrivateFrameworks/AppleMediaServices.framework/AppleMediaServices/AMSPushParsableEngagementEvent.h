@class NSString;

@interface AMSPushParsableEngagementEvent : NSObject <AMSPushParsable>

@property (class, readonly, nonatomic) BOOL shouldSkipAccountCheck;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleNotificationPayload:(id)a0 config:(id)a1 bag:(id)a2;


@end
