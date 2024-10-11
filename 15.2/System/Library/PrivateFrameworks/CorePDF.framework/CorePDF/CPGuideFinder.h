@class CPCluster, NSMutableArray, CPZone;

@interface CPGuideFinder : NSObject <CPDisposable> {
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    double *anchorArray;
    double *rightHandSideArray;
    struct { double x0; double x1; double x2; double x3; int x4; int *x5; struct CPPDFStyle *x6; } *crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    double medianFontSizeOfFirstCharacter;
    double medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (BOOL)gutterSeparates:(id)a0 from:(id)a1;
+ (void)reclusterPreservingAlignment:(id)a0;
+ (void)reclusterBetweenGuides:(id)a0;
+ (BOOL)guideSeparates:(id)a0 from:(id)a1;

- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (id)gutters;
- (id)leftGuides;
- (id)rightGuides;
- (id)initWithContentZone:(id)a0;
- (void)findGutters;
- (void)findGuides;
- (void)markTextLines;
- (void)splitTextLines;
- (BOOL)addStripTo:(id)a0 bottom:(double)a1 left:(double)a2 top:(double)a3 right:(double)a4;
- (void)setAlignForWordWithExtent:(struct { double x0; double x1; double x2; double x3; int x4; int *x5; struct CPPDFStyle *x6; } *)a0 stripArray:(id)a1 stripMax:(double)a2;
- (void)subdivideStripInto:(id)a0 from:(double)a1 to:(double)a2 borderedBy:(struct { double x0; double x1; double x2; double x3; int x4; int *x5; struct CPPDFStyle *x6; } *)a3 ofCount:(unsigned int)a4 crossedBy:(struct { double x0; double x1; double x2; double x3; int x4; int *x5; struct CPPDFStyle *x6; } *)a5 ofCount:(unsigned int)a6;
- (void)getWordEdges;
- (void)findWordEdgeClusters;
- (void)subdivideGutterFrom:(unsigned int)a0 to:(unsigned int)a1;
- (void)subdivideLeftGuideAt:(unsigned int)a0;
- (void)subdivideRightGuideAt:(unsigned int)a0;
- (BOOL)hasGutters;
- (BOOL)hasLeftGuides;
- (BOOL)hasRightGuides;
- (void)func:(id)a0 and:(id)a1 and:(unsigned int)a2 and:(unsigned int)a3;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (double)medianFontSizeOfFirstCharacter;
- (double)medianFontSizeOfLastCharacter;

@end
