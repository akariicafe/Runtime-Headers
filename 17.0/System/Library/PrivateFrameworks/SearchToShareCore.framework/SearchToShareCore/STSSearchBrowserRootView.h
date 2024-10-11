@class UIView, NSMutableArray, STSSearchBrowserHeaderView;

@interface STSSearchBrowserRootView : UIView {
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) STSSearchBrowserHeaderView *headerView;
@property (nonatomic) double headerTopInset;
@property (retain, nonatomic) UIView *contentView;

- (id)init;
- (void)didAddSubview:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
