@interface PXAnchorInsertingOrRemovingVisualPositionsChangeDetails : PXVisualPositionsChangeDetails {
    BOOL _anchorInserted;
    long long _anchorRelativePosition;
}

- (struct { long long x0; long long x1; BOOL x2; })bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)a0;
- (id)initWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4 headerIndexesAfterChanges:(id)a5;
- (struct { long long x0; long long x1; BOOL x2; })bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)a0;
- (id)initWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4 headerIndexesAfterChanges:(id)a5 anchorInserted:(BOOL)a6 relativePosition:(long long)a7;

@end
