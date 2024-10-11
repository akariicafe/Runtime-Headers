@class AXMVisionFeature;

@interface AXMLayoutSequence : AXMLayoutItem {
    AXMVisionFeature *_feature;
}

+ (id)sequence:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)feature;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
