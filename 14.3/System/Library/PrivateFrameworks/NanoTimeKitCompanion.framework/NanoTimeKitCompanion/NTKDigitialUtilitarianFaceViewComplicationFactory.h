@class UIColor, NSArray, NTKUtilityComplicationFactory;

@interface NTKDigitialUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKUtilityComplicationFactory *_complicationFactory;
}

@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) BOOL usesLegibility;
@property (copy, nonatomic) NSArray *supportedComplicationSlots;
@property (copy, nonatomic) id /* block */ shadowColorProviderBlock;
@property (copy, nonatomic) id /* block */ timeTravelYAdjustmentProviderBlock;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)a0 faceView:(id)a1;
- (void)applyComplicationContentSpecificAttributesAnimated:(BOOL)a0 faceView:(id)a1;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (void)prepareForEditingForFaceView:(id)a0;
- (void)cleanupAfterEditingForFaceView:(id)a0;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)a0 faceView:(id)a1 forSlots:(id)a2;
- (void)setAlpha:(double)a0 faceView:(id)a1;
- (double)_timeTravelYAdjustment;
- (BOOL)fadesComplicationSlot:(id)a0 inEditMode:(long long)a1 faceView:(id)a2;
- (long long)_photosUtilitySlotForSlot:(id)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1 attributes:(unsigned long long)a2 faceView:(id)a3;
- (void)setForegroundColor:(id)a0 faceView:(id)a1;
- (void)setShadowColor:(id)a0 faceView:(id)a1;
- (void)setUsesLegibility:(BOOL)a0 faceView:(id)a1;

@end
