@interface PGMeaningfulEventProcessor : NSObject

+ (id)_postProcessResults:(id)a0 forMoment:(id)a1;
+ (id)_postProcessBirthdaysWithResults:(id)a0 forMoment:(id)a1;
+ (id)_legacyMeaningResultForResult:(id)a0 requiredCriteriaByIdentifier:(id)a1;
+ (id)processRequiredCriteria:(id)a0 forMoment:(id)a1;

@end
