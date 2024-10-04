@class UIKBGradient, NSString;

@interface UIKBDivotedEffect : NSObject <UIKBRenderEffect>

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly, nonatomic) SEL renderSelector;
@property (nonatomic) double weight;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (readonly, nonatomic) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGColor { } *)CGColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
