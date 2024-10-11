@class NSString, UIImageView, BPSWatchView, PBBridgeAssetsManager;

@interface BPSRemoteWatchView : UIView

@property (copy, nonatomic) NSString *advertisingName;
@property (retain, nonatomic) PBBridgeAssetsManager *assetManager;
@property (retain, nonatomic) BPSWatchView *watch;
@property (retain, nonatomic) UIImageView *watchScreen;
@property (nonatomic) unsigned long long style;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAdvertisingName:(id)a0 andStyle:(unsigned long long)a1;

@end
