@class NSArray, NSString, UIImageView, NTKColoringLabel, NSDate, CLKFont, UILayoutGuide;
@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextMatchupScoreView : UIView <CLKMonochromeComplicationView> {
    UIImageView *_homeLogoImageView;
    NTKColoringLabel *_homeNameLabel;
    NTKColoringLabel *_homeDescriptionLabel;
    UIImageView *_awayLogoIamgeView;
    NTKColoringLabel *_awayNameLabel;
    NTKColoringLabel *_awayDescriptionLabel;
    NTKColoringLabel *_statusLabel;
    NTKColoringLabel *_timeLabel;
    NSDate *_timeForLabel;
    CLKFont *_boldMatchupFont;
    CLKFont *_regularMatchupFont;
    CLKFont *_statusFont;
    UILayoutGuide *_logoLayoutGuide;
    UILayoutGuide *_descriptionLayoutGuide;
    NSArray *_withLogoLayoutConstraints;
    NSArray *_withoutDateLayoutConstraints;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_timeStringForFetchDate:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)updateTimeLabel;
- (void)configureWithMatchup:(id)a0;

@end
