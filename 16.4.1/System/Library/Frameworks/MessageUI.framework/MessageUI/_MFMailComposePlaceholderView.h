@class MFMailComposeHeaderView, MFComposeSubjectView;

@interface _MFMailComposePlaceholderView : UIScrollView {
    MFMailComposeHeaderView *_toField;
    MFMailComposeHeaderView *_multiView;
    MFComposeSubjectView *_subjectView;
}

- (void)setSubject:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
