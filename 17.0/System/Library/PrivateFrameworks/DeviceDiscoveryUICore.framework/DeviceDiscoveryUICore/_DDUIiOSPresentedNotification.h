@class NSString, DDUIApplicationInfo;

@interface _DDUIiOSPresentedNotification : NSObject

@property (retain, nonatomic) DDUIApplicationInfo *applicationInfo;
@property (retain, nonatomic) NSString *notificationID;
@property (retain, nonatomic) NSString *remoteDeviceIdentifier;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
