@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator {
    struct CGPoint { double x; double y; } _origin;
}

@property (nonatomic) double referenceHeight;

- (BOOL)_addColumnWithTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 imageFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2;
- (BOOL)_addColumnWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long)a1;
- (BOOL)_hasLeftSuboptimalColumn;
- (BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)a0 columnParsed:(BOOL *)a1;
- (BOOL)_scanSpecialSequenceColumn:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long *)a1;
- (BOOL)_isAtEndOfColumn;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long)a1 useMagneticGuidelines:(BOOL)a2 block:(id /* block */)a3;
- (void)willParseTiles;
- (BOOL)_parseTileTriplet;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseSingleTile;
- (BOOL)_scanTripletWithLargeLead:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_addSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanNonPanoramaSequence:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long)a1;
- (BOOL)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;

@end
