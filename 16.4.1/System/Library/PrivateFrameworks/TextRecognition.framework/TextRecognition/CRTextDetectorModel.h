@class MLModel;

@interface CRTextDetectorModel : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (id)defaultURLOfModelInThisBundle;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromData:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
