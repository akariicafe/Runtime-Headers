@class NSSet;

@interface watch_durationOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double duration_pred;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithDuration_pred:(double)a0;

@end
