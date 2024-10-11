@class NSString, HMDHAPAccessory;

@interface HMDTargetControllerErrorEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long errorType;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;

+ (id)uuid;
+ (id)errorEventWithErrorType:(unsigned long long)a0 accessory:(id)a1;

@end
