@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache, VNRequestSpecifier;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding> {
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    VNRequestSpecifier *_originatingRequestSpecifier;
}

- (void).cxx_destruct;
- (id)operationPointsAndReturnError:(id *)a0;
- (id)initWithOperationPointsCache:(id)a0 originatingRequestSpecifier:(id)a1;

@end
