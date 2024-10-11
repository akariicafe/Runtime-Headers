@interface INAlarmRepeatScheduleOptionsResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedAlarmRepeatScheduleOptions:(unsigned long long)a0;
+ (id)confirmationRequiredWithAlarmRepeatScheduleOptionsToConfirm:(unsigned long long)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
