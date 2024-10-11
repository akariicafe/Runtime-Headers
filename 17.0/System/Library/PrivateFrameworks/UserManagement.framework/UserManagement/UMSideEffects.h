@class NSString, NSObject;
@protocol UMLibInfoProviding, UMLibNotifyProviding;

@interface UMSideEffects : NSObject <UMSideEffectsProviding>

@property (retain, nonatomic) NSObject<UMLibInfoProviding> *libInfo;
@property (retain, nonatomic) NSObject<UMLibNotifyProviding> *libNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
