@class NSString, UIFont;

@interface MKFontManager : NSObject <MKFontManager>

@property (nonatomic) BOOL useSmallFont;
@property (readonly, nonatomic) UIFont *largeTitleFontStatic;
@property (readonly, nonatomic) UIFont *largeTitleFont;
@property (readonly, nonatomic) UIFont *mediumTitleFont;
@property (readonly, nonatomic) UIFont *brandTitleFont;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly, nonatomic) UIFont *bodyFont;
@property (readonly, nonatomic) UIFont *boldBodyFont;
@property (readonly, nonatomic) UIFont *mediumBodyFont;
@property (readonly, nonatomic) UIFont *sectionHeaderFont;
@property (readonly, nonatomic) UIFont *sectionHeaderButtonFont;
@property (readonly, nonatomic) UIFont *attributionFont;
@property (readonly, nonatomic) UIFont *smallAttributionFont;
@property (readonly, nonatomic) UIFont *rowButtonFont;
@property (readonly, nonatomic) UIFont *rowGlyphButtonFont;
@property (readonly, nonatomic) UIFont *ratingOverallFont;
@property (readonly, nonatomic) UIFont *ratingOverallPercentageFont;
@property (readonly, nonatomic) UIFont *recommendSubtitleFont;
@property (readonly, nonatomic) UIFont *ratingCallToActionGlyphFont;
@property (readonly, nonatomic) UIFont *ratingCallToActionLabelFont;
@property (readonly, nonatomic) UIFont *ratingCallToActionHeaderLabelFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)setUseSmallFont:(BOOL)a0;

- (id)iconFontToMatch:(id)a0;

@end
