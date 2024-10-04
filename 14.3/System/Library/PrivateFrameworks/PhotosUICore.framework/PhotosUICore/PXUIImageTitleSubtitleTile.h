@class NSString, PXImageTitleSubtitleSpec, PXTitleSubtitleUILabel;

@interface PXUIImageTitleSubtitleTile : PXUIImageTile {
    PXTitleSubtitleUILabel *_label;
    PXImageTitleSubtitleSpec *_spec;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)view;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
