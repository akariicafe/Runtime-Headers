@class NSString, NSTimer, NSMutableSet, NSDictionary, NSObject, EasyConfigDevice;
@protocol OS_dispatch_semaphore;

@interface AUMFiSetupController : AUSetupController {
    EasyConfigDevice *_easyConfigDevice;
    NSDictionary *_accessoryResponseDict;
    NSDictionary *_autoGuessRecommendationDict;
    NSDictionary *_setupOptionsDict;
    NSDictionary *_destinationNetworkScanRecord;
    NSDictionary *_targetMFiDeviceScanRecord;
    NSString *_destinationNetworkSSID;
    NSString *_postConfigTargetDeviceFriendlyName;
    NSObject<OS_dispatch_semaphore> *_askUserForPasswordSemaphore;
    NSObject<OS_dispatch_semaphore> *_easyConfigConfigurationCompleteSemaphore;
    NSObject<OS_dispatch_semaphore> *_linkUpOnTargetSWAPSemaphore;
    int _waitingForLinkState;
    BOOL _setupEnded;
    BOOL _successfullyEstablishedLinkOnTargetDeviceSWAP;
    BOOL _successfullyEstablishedLinkOnDestinationAP;
    BOOL _promptedUserForDestinationWiFiPSK;
    BOOL _postediAPAccessoryConfiguredNotification;
    BOOL _destinationNetworkPasswordAccepted;
    long long _lastHeardEasyConfigProgressNotification;
    struct { double startTime; unsigned char userChangedFriendlyName; unsigned char playPasswordSet; unsigned char adminPasswordSet; unsigned char destinationNetworkRecommendationUsed; double secondsToGetLinkUpOnSWAP; int wifiJoinSWAPError; unsigned char hitJoiningTargetSWAPTimeout; int rssiOfSWAP; unsigned int snrOfSWAP; unsigned int channelOfSWAP; } _easyConfigPreConfigMetrics;
    struct { double secondsToGetLinkUpOnDestination; int wifiJoinDestinationAPError; unsigned char destinationNetworkPSKInKeychain; unsigned char hitJoiningDestinationAPTimeout; int rssiOfDestinationAP; unsigned int snrOfDestinationAP; unsigned int channelOfDestinationAP; } _easyConfigPostConfigMetrics;
    double _timeSWAPJoinStarted;
    double _timeDestinationAPJoinStarted;
}

@property (readonly, nonatomic) NSMutableSet *setupDelegates;
@property (retain) NSTimer *linkUpOnDestinationNetworkTimer;
@property (copy) NSString *destinationNetworkPassword;

+ (id)setupController;

- (id)init;
- (void)dealloc;
- (int)cancelSetup;
- (void)callbackAskUserForPasswordResult:(int)a0 password:(id)a1 remember:(int)a2;
- (void)callbackAskUserForUncertifiedResult:(int)a0;
- (void)callbackAskUserForSetupCodeResult:(int)a0 password:(id)a1;
- (int)setupFromAutoguessRecommendation:(id)a0 withOptions:(id)a1;
- (int)updateSettingsAsync;
- (id)targetBaseInfoDict;
- (void)invalidateLinkUpOnDestinationNetworkTimer;
- (void)stopListeningToAllNotifications;
- (void)linkChangeNotification:(id)a0;
- (int)joinTargetSWAP;
- (int)sendProgressToUI:(int)a0 withParamDict:(id)a1;
- (void)startEasyConfigWhenReady;
- (int)endSetup:(int)a0;
- (void)linkUpOnSWAP:(id)a0;
- (void)linkUpOnDestinationAP:(id)a0;
- (void)joinSWAPDone:(id)a0;
- (void)askUserForNetworkPassword:(id)a0;
- (void)handleEasyConfigProgress:(id)a0;
- (void)handleEasyConfigStopped:(id)a0;
- (void)handleEasyConfigProgressAppliedConfigurationToDevice:(id)a0;
- (void)handleEasyConfigProgressSearchingForPostConfigDevice:(id)a0;
- (void)joinDestinationAPDone:(id)a0;
- (void)joinDestinationNetworkTimeoutFired:(id)a0;
- (void)askUserForSetupCodeWithRetryStatus:(BOOL)a0;
- (void)acquireDestinationNetworkPassword;
- (void)askUserForUncertified;
- (void)_startEasyConfigWhenReady;
- (void)createEasyConfigDeviceConfiguration;
- (void)startListeningForEasyConfigDeviceStatusNotifications;
- (int)sendSetupCompleteToUIWithResult:(int)a0;
- (int)sendiAPOverWiFiDeviceConfiguredXPCMessage;
- (void)logCompletionStatus:(int)a0;
- (void)stopListeningToEasyConfigDeviceStatusNotifications;

@end
