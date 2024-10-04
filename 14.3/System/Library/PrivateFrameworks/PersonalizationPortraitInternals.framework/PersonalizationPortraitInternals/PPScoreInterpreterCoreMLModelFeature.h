@class NSString;

@interface PPScoreInterpreterCoreMLModelFeature : NSObject

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) long long featureType;
@property (readonly, nonatomic) unsigned long long multiArraySize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeatureName:(id)a0 multiArraySize:(unsigned long long)a1;
- (id)initWithFeatureName:(id)a0;

@end
