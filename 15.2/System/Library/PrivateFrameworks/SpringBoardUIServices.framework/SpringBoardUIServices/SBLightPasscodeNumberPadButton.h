@class UIColor, NSString;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>

@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingOutsideRing;
+ (BOOL)_shouldUseAlternativeCirlceViewAlphas;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;

- (void).cxx_destruct;
- (id)initForCharacter:(long long)a0;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (int)characterType;
- (id)stringCharacter;

@end
