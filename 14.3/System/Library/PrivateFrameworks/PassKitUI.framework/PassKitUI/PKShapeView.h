@class CAShapeLayer;

@interface PKShapeView : UIView {
    CAShapeLayer *_shapeLayer;
}

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
