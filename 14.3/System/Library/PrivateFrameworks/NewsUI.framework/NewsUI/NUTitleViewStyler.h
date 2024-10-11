@class UIColor, NSString;

@interface NUTitleViewStyler : NSObject <NUTitleViewStyler>

@property (readonly, nonatomic) UIColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)messageSmallFont;
- (id)init;
- (void).cxx_destruct;
- (id)messageLargeFont;
- (id)titleSmallFont;
- (id)styleTextAsTitle:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (id)messageParagraphStyle;
- (id)styleTitleText:(id)a0 styleType:(unsigned long long)a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
- (id)titleLargeFont;
- (id)initWithTextColor:(id)a0;
- (id)styleTextAsMessage:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (id)titleParagraphStyleWithWrapping:(BOOL)a0;

@end
