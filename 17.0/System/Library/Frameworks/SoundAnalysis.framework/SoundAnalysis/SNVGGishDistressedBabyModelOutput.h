@class MLMultiArray, NSSet;

@interface SNVGGishDistressedBabyModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input_1;
@property (retain, nonatomic) MLMultiArray *Confidence;
@property (retain, nonatomic) MLMultiArray *Detected;
@property (retain, nonatomic) MLMultiArray *detectedHistoryOut;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithInput_1:(id)a0 Confidence:(id)a1 Detected:(id)a2 detectedHistoryOut:(id)a3;

@end
