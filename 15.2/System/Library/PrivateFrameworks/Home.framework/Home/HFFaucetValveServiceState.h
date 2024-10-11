@interface HFFaucetValveServiceState : HFServiceState

@property (readonly, nonatomic) unsigned long long type;

+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (id)optionalCharacteristicTypes;
+ (unsigned long long)_typeForSystemActiveState:(BOOL)a0 heaterCoolerActiveState:(id)a1 usageState:(long long)a2 currentHeaterCoolerState:(id)a3;

- (BOOL)isTransitioning;
- (long long)priority;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)a0;
- (id)stateTypeIdentifier;

@end
