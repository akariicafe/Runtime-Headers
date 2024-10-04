@class NSArray, NSString;

@interface CHBottomUpStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    struct CGVector { double dx; double dy; } _defaultOrientationVector;
    struct CGVector { double dx; double dy; } _defaultDeviationVector;
    long long _textStrokeClassification;
    NSString *_strategyIdentifier;
    double _strokeDeviationCapCoeff;
    double _groupingMergingCostThresh;
    double _groupingMergingEndCostLowThresh;
    double _groupingSimilarCostThresh;
    long long _groupingContextSize;
    double _mergeEndDxCostCoeff;
    double _mergeEndDyCostCoeff;
    double _mergeEndBelowModifier;
    double _mergeEndLeftModifier;
    double _mergeMiddleDxCostCoeff;
    double _mergeMiddleDyCostCoeff;
    double _mergeMiddleBelowModifier;
    long long _splitMinimumStrokeCount;
    long long _splitMaxNaturalIndexDiffThreshold;
    BOOL _shouldLimitDefaultWritingOrientationDeviation;
    BOOL _shouldAdjustDeviationOfSmallGroups;
    BOOL _shouldCoalesceLastSubstrokes;
}

@property (readonly, nonatomic) BOOL isInlineContinuousMode;
@property (readonly, nonatomic) NSArray *textInputTargets;

- (void).cxx_destruct;
- (void)smoothLocalWritingOrientations:(void *)a0;
- (void)updateLocalWritingOrientationsForSubstrokes:(id)a0 useCoalescedCenter:(BOOL)a1;
- (void)refineLocalWritingOrientationsForSubstrokes:(id)a0 useCoalescedCenter:(BOOL)a1;
- (struct CGVector { double x0; double x1; })clippedWritingOrientation:(struct CGVector { double x0; double x1; })a0;
- (long long)compareDistanceInWritingSequenceOfStroke:(id)a0 andStroke:(id)a1 toReferenceStroke:(id)a2;
- (void)estimateWritingDirectionAndSortSubstrokesAccordingly:(id *)a0 averageWritingOrientation:(struct CGVector { double x0; double x1; } *)a1 averageStrokeDeviation:(struct CGVector { double x0; double x1; } *)a2;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })flippedCenters:(const void *)a0 ofSubstrokes:(id)a1 maxStrokesGap:(long long)a2 begnning:(BOOL)a3;
- (void)getMergingEndOfLineCost:(double *)a0 mergingEndOfLineStroke:(id *)a1 forStroke:(id)a2 consistingOfSubstrokes:(id)a3 toLineGroup:(id)a4;
- (void)getMergingMiddleOfLineCost:(double *)a0 mergingMiddleOfLineStroke:(id *)a1 forStroke:(id)a2 consistingOfSubstrokes:(id)a3 toLineGroup:(id)a4;
- (id)initWithStrokeProvider:(id)a0 defaultWritingOrientation:(long long)a1 locales:(id)a2 isInlineContinuousMode:(BOOL)a3 inlineContinuousModeTargets:(id)a4;
- (void)mergeGroupsPostProcessing:(id)a0 createdGroups:(id)a1 deletedGroups:(id)a2 availableGroupingStrategies:(id)a3 allowOppositeOrientations:(BOOL)a4;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4;
- (BOOL)refineWritingOrientationAndResortSubstrokes:(id)a0 averageWritingOrientation:(struct CGVector { double x0; double x1; } *)a1;
- (id)regroupedStrokeGroup:(id)a0 fromResult:(id)a1 withAdversarialGroup:(id)a2 allSubstrokesByStrokeIdentifier:(id)a3 cancellationBlock:(id /* block */)a4;
- (double)relativeOverlapOfGroup:(id)a0 withGroup:(id)a1;
- (void)sortSubstrokesByWritingDirection:(id)a0 averageWritingOrientation:(struct CGVector { double x0; double x1; } *)a1;
- (id)strategyIdentifier;
- (id)strokeGroupFromStrokes:(id)a0;
- (id)strokeGroupMergingGroup:(id)a0 withGroup:(id)a1;
- (id)tryRegroupingStrokesInGroup:(id)a0 substrokePlacementsByStrokeIdentifier:(id)a1 cancellationBlock:(id /* block */)a2;
- (void)updateLocalStrokeDeviationsForSubstrokes:(id)a0 averageStrokeDeviation:(struct CGVector { double x0; double x1; } *)a1;
- (id)updatedGroupingResult:(id)a0 byAddingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 stableStrokeIdentifiers:(id)a3 allSubstrokesByStrokeIdentifier:(id)a4 withCancellationBlock:(id /* block */)a5;

@end
