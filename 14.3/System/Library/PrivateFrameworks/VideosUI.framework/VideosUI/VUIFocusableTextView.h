@class VUILabel, NSString, VUITextLayout;

@interface VUIFocusableTextView : TVFocusableTextView <VUILabelBaselineProtocol>

@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUILabel *computationLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textViewWithElement:(id)a0 textLayout:(id)a1 existingTextView:(id)a2;
+ (id)textViewWithString:(id)a0 textLayout:(id)a1 existingTextView:(id)a2;
+ (id)textViewWithString:(id)a0 textLayout:(id)a1 titleString:(id)a2 titleLayout:(id)a3 existingTextView:(id)a4;
+ (id)textViewWithElement:(id)a0 textLayout:(id)a1 titleElement:(id)a2 titleLayout:(id)a3 existingTextView:(id)a4;

- (void)_updateTextColor;
- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (void)traitCollectionDidChange:(id)a0;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;

@end
