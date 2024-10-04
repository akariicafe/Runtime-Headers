@interface INModifyRelationshipResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedModifyRelationship:(id)a0;
+ (id)disambiguationWithModifyRelationshipsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithModifyRelationshipToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
