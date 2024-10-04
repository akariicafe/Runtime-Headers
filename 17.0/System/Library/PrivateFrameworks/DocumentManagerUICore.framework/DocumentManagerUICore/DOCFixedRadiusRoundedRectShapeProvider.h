@class NSString;

@interface DOCFixedRadiusRoundedRectShapeProvider : NSObject <UIShapeProvider>

@property (readonly) double cornerRadius;
@property (readonly) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolvedShapeInContext:(id)a0;
- (id)initWithCornerRadius:(double)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
