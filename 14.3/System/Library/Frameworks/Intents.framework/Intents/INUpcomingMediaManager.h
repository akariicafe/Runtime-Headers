@class CSSearchableIndex;

@interface INUpcomingMediaManager : NSObject

@property (class, readonly, nonatomic) INUpcomingMediaManager *sharedManager;

@property (readonly, nonatomic) CSSearchableIndex *index;

+ (id)mediaQueue;

- (void)setSuggestedMediaIntents:(id)a0;
- (void)_setSuggestedMediaIntents:(id)a0 forBundleIdentifier:(id)a1;
- (void)setPredictionMode:(long long)a0 forType:(long long)a1;
- (void)_replaceMediaIntents:(id)a0 forBundleIdentifier:(id)a1;
- (long long)_predictionModeForBundleId:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)keyWithMediaItemTypeName:(id)a0 bundleId:(id)a1;
- (void).cxx_destruct;
- (id)initWithSearchableIndex:(id)a0;

@end
