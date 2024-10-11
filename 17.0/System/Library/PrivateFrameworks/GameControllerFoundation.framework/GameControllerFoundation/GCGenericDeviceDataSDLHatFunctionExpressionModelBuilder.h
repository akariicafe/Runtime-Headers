@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataSDLHatFunctionExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *trueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *falseExpression;

+ (Class)modelClass;

- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
