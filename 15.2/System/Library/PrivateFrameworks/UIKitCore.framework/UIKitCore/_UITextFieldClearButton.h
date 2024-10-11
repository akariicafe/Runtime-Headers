@protocol _UITextFieldClearButtonImageProviding;

@interface _UITextFieldClearButton : UIButton

@property (weak, nonatomic) id<_UITextFieldClearButtonImageProviding> imageProvider;

+ (Class)_visualProviderClass;

- (void)setPointerInteractionEnabled:(BOOL)a0;
- (BOOL)_isModernButton;
- (id)_defaultImageForState:(unsigned long long)a0 withConfiguration:(id)a1;
- (void).cxx_destruct;

@end
