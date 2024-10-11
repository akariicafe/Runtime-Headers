@class UIColor, _MPDownloadProgressRingView, UIImageView, UIImage, UIView;

@interface MPDownloadProgressView : UIView {
    UIImageView *_centerImageView;
    UIView *_outerRingView;
    _MPDownloadProgressRingView *_progressView;
}

@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) UIImage *centerImage;
@property (retain, nonatomic) UIColor *outerRingColor;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
