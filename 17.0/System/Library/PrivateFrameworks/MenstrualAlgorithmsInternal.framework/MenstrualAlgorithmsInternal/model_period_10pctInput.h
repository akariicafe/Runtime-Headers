@class MLMultiArray, NSSet;

@interface model_period_10pctInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *in_;
@property (retain, nonatomic) MLMultiArray *lstm_1_h_in;
@property (retain, nonatomic) MLMultiArray *lstm_1_c_in;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithIn:(id)a0;
- (id)initWithIn:(id)a0 lstm_1_h_in:(id)a1 lstm_1_c_in:(id)a2;

@end
