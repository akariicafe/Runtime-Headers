@interface HealthExperienceUI.TextViewCollectionReusableView : UICollectionViewCell <UITextViewDelegate> {
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ textView;
}

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
