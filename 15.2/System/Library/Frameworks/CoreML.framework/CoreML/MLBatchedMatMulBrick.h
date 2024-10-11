@class NSNumber, NSArray, NSString;

@interface MLBatchedMatMulBrick : NSObject <EspressoBrick>

@property (readonly, nonatomic) BOOL shapeInfoNeeded;
@property (readonly, nonatomic) NSNumber *transposeA;
@property (readonly, nonatomic) NSNumber *transposeB;
@property (readonly, nonatomic) NSArray *inputRanks;
@property (readonly, nonatomic) NSArray *outputRanks;
@property (readonly, nonatomic) NSArray *inputShapes;
@property (readonly, nonatomic) NSArray *outputShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)computeOnCPUWithInputTensors:(id)a0 outputTensors:(id)a1;
- (id)setupForInputShapes:(id)a0 withParameters:(id)a1;
- (BOOL)hasGPUSupport;
- (id)initWithParameters:(id)a0;

@end
