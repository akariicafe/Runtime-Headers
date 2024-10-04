@class NSArray;

@interface HRECharacteristicTriggerTemplate : HRETriggerTemplate

@property (retain, nonatomic) NSArray *triggerCharacteristicValues;
@property (retain, nonatomic) NSArray *characteristicTypePriority;
@property (nonatomic) BOOL characteristicPerServiceRule;
@property (nonatomic) BOOL enforcePriority;
@property (nonatomic) BOOL singleRecommendationPerSplit;
@property (nonatomic) BOOL allowMultipleEventsFeature;

- (void).cxx_destruct;
- (id)init;
- (id)_subclass_triggerBuilderForRecommendation:(id)a0 withObjects:(id)a1;

@end
