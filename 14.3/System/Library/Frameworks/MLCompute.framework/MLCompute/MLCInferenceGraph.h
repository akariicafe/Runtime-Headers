@interface MLCInferenceGraph : MLCGraph

@property (nonatomic) unsigned long long inferenceNodeInit;
@property (nonatomic) unsigned long long inferenceNodeIndexInGraphLayerList;
@property (nonatomic) unsigned long long compilerOptions;
@property (readonly, nonatomic) unsigned long long deviceMemorySize;

+ (id)graphWithGraphObjects:(id)a0;

- (BOOL)addInputs:(id)a0;
- (BOOL)addOutputs:(id)a0;
- (id)description;
- (id)nodeWithLayer:(id)a0 sources:(id)a1;
- (id)nodeWithLayer:(id)a0 source:(id)a1;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1 lossLabelWeights:(id)a2;
- (BOOL)compileWithOptions:(unsigned long long)a0 device:(id)a1;
- (BOOL)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 batchSize:(unsigned long long)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (BOOL)executeWithInputsData:(id)a0 batchSize:(unsigned long long)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithGraphObjects:(id)a0;
- (BOOL)recompile;
- (BOOL)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 outputsData:(id)a3 batchSize:(unsigned long long)a4 options:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1;
- (id)resultTensorsForLayer:(id)a0;
- (id)sourceTensorsForLayer:(id)a0;
- (BOOL)linkWithGraphs:(id)a0;
- (id)splitWithSource:(id)a0 splitCount:(unsigned long long)a1 dimension:(unsigned long long)a2;
- (id)splitWithSource:(id)a0 splitSectionLengths:(id)a1 dimension:(unsigned long long)a2;
- (id)concatenateWithSources:(id)a0 dimension:(unsigned long long)a1;
- (id)reshapeWithShape:(id)a0 source:(id)a1;
- (id)transposeWithDimensions:(id)a0 source:(id)a1;
- (BOOL)executeWithInputsData:(id)a0 outputsData:(id)a1 batchSize:(unsigned long long)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
