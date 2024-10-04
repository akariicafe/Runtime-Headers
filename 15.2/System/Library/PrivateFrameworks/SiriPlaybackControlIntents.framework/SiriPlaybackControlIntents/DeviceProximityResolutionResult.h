@interface DeviceProximityResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedDeviceProximity:(long long)a0;
+ (id)confirmationRequiredWithDeviceProximityToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
