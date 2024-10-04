@class UIColor;

@interface VUIListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) BOOL shouldAppearSelected;

- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
