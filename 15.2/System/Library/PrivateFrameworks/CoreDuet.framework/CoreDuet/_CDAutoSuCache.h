@class NSDictionary, NSDate;

@interface _CDAutoSuCache : NSObject

@property (retain) NSDictionary *predictedSleep;
@property (retain) NSDate *predictedSleepValidityStartDate;
@property (retain) NSDate *predictedSleepValidityEndDate;

+ (id)sharedCache;

- (void)clear;
- (id)cachedPredictedSleepDictionaryForDate:(id)a0;
- (void)setCachedPredictedSleepDictionary:(id)a0 validityStartDate:(id)a1 validityEndDate:(id)a2;
- (void).cxx_destruct;

@end
