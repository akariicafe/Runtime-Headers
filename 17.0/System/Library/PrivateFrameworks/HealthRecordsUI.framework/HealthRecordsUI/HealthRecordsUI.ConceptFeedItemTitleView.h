@class NSLayoutYAxisAnchor;

@interface HealthRecordsUI.ConceptFeedItemTitleView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ dateLabel;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateChevronConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateTrailingConstraint;
    void /* unknown type, empty encoding */ activeConstraints;
    void /* unknown type, empty encoding */ headerImage;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ dateString;
    void /* unknown type, empty encoding */ categoryColor;
    void /* unknown type, empty encoding */ hidesChevron;
    void /* unknown type, empty encoding */ isInEditingMode;
    void /* unknown type, empty encoding */ hidesHeaderSymbolForAccessibilitySizing;
    void /* unknown type, empty encoding */ viewData;
}

@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
