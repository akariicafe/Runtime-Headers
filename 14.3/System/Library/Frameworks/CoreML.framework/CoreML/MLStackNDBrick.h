@class NSNumber, NSArray, NSString;

@interface MLStackNDBrick : NSObject <EspressoBrick>

@property (readonly, nonatomic) BOOL shapeInfoNeeded;
@property (readonly, nonatomic) NSNumber *axis;
@property (readonly, nonatomic) NSArray *inputRanks;
@property (readonly, nonatomic) NSArray *outputRanks;
@property (readonly, nonatomic) NSArray *inputShapes;
@property (readonly, nonatomic) NSArray *outputShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)computeOnCPUWithInputTensors:(id)a0 outputTensors:(id)a1;
- (id)setupForInputShapes:(id)a0 withParameters:(id)a1;
- (BOOL)hasGPUSupport;

@end
