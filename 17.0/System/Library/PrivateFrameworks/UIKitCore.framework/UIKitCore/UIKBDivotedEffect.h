@class UIKBGradient, NSString;

@interface UIKBDivotedEffect : NSObject <UIKBRenderEffect>

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL renderUnder;
@property (nonatomic) double weight;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (readonly, nonatomic) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGColor { } *)CGColor;
- (void)renderEffectWithRenderer:(id)a0 traits:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
