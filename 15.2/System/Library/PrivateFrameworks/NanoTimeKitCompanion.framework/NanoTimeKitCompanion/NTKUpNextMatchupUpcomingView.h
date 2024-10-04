@class NSString, UIImageView, NTKColoringLabel, UILayoutGuide;
@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextMatchupUpcomingView : UIView <CLKMonochromeComplicationView> {
    UIImageView *_homeLogoImageView;
    UIImageView *_awayLogoImageView;
    NTKColoringLabel *_versusLabel;
    NTKColoringLabel *_descriptionLabel;
    UILayoutGuide *_homeLogoLayoutGuide;
    UILayoutGuide *_awayLogoLayoutGuide;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)configureWithMatchup:(id)a0;

@end
