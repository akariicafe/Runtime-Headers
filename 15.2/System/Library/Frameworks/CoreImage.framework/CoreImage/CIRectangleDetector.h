@class NSMutableDictionary, CIContext;

@interface CIRectangleDetector : CIDetector {
    NSMutableDictionary *featureOptions;
}

@property (retain, nonatomic) CIContext *context;

- (void)releaseResources;
- (id)featuresInImage:(id)a0 options:(id)a1;
- (id)initWithContext:(id)a0 options:(id)a1;
- (id)featuresInImage:(id)a0;
- (void)dealloc;

@end
