@class UIActivityIndicatorView;

@interface MKCollectionBatchCell : UICollectionViewCell {
    UIActivityIndicatorView *_loadingView;
}

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startedLoadingBatch;
- (void)finishedLoadingBatch;
- (void)setupConstraitns;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
