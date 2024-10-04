@class TSDShadow;
@protocol EQKitLayout, EQKitLayoutContext;

@interface TSWPEquationLayout : TSDLayout

@property (retain, nonatomic) id<EQKitLayoutContext> equationLayoutContext;
@property (readonly, nonatomic) id<EQKitLayout> equationLayout;
@property (readonly, nonatomic) BOOL equationIsValid;
@property (readonly, nonatomic) struct CGColor { } *textColor;
@property (readonly, nonatomic) TSDShadow *textShadow;

- (void)dealloc;
- (void)validate;
- (id)computeLayoutGeometry;
- (double)inlineVerticalOffset;
- (double)inlineCenteredAlignmentOffset;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary { } *)a0 columnWidth:(double)a1;
- (BOOL)wantsRoundedInlinePosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCulling;

@end
