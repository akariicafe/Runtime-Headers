@interface INDeleteTasksTaskResolutionResult : INTaskResolutionResult

+ (id)unsupportedForReason:(long long)a0;

- (id)_initWithIntentSlotResolutionResult:(id)a0 slotDescription:(id)a1;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)a0;
- (id)initWithTaskResolutionResult:(id)a0;

@end
