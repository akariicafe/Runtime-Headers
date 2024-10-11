@class NSString, NSArray, FigAlternateObjC;

@interface AVAssetVariantVideoAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
}

@property (readonly, nonatomic) NSString *videoRange;
@property (readonly, nonatomic) NSArray *codecTypes;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (readonly, nonatomic) double nominalFrameRate;

- (id)initWithFigAlternateObjC:(id)a0;
- (void)dealloc;

@end
