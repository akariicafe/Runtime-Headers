@class UIFont, HUGridScenePlaceholderLayoutOptions, HUGridStatusBannerCellLayoutOptions, HUGridBannerCellLayoutOptions, HUGridSceneCellLayoutOptions, HUGridStatusCellLayoutOptions, HUGridCameraCellLayoutOptions, NSString, HUGridWelcomeUIBannerCellLayoutOptions, HUNavigationBarLayoutOptions, HUGridServiceCellLayoutOptions, NSNumber, HUGridHeadlineCellLayoutOptions, HUGridPlaceholderServiceCellLayoutOptions;

@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying>

@property (retain, nonatomic) NSNumber *overrideViewSizeSubclass;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long columnStyle;
@property (nonatomic) BOOL headlineHidden;
@property (nonatomic) BOOL statusHidden;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic) UIFont *headlineFont;
@property (retain, nonatomic) UIFont *sectionHeaderFont;
@property (nonatomic) double headlineBaselineToSceneHeaderBaselineDistance;
@property (nonatomic) double sectionTopMargin;
@property (nonatomic) double sectionBottomMargin;
@property (nonatomic) double sectionLeadingMargin;
@property (nonatomic) double sectionTrailingMargin;
@property (nonatomic) double sectionBottomToNextSectionTitleBaselineDistance;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionTitleMargin;
@property (nonatomic) double minimumMarginBelowHeadline;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double columnSpacing;
@property (retain, nonatomic) NSNumber *overrideNumberOfColumns;
@property (copy, nonatomic) HUGridCameraCellLayoutOptions *cameraCellOptions;
@property (copy, nonatomic) HUGridHeadlineCellLayoutOptions *headlineCellOptions;
@property (copy, nonatomic) HUGridStatusCellLayoutOptions *statusCellOptions;
@property (copy, nonatomic) HUGridSceneCellLayoutOptions *sceneCellOptions;
@property (copy, nonatomic) HUGridScenePlaceholderLayoutOptions *placeholderSceneCellOptions;
@property (copy, nonatomic) HUGridServiceCellLayoutOptions *serviceCellOptions;
@property (copy, nonatomic) HUGridPlaceholderServiceCellLayoutOptions *placeholderServiceCellOptions;
@property (copy, nonatomic) HUNavigationBarLayoutOptions *navigationBarOptions;
@property (copy, nonatomic) HUGridBannerCellLayoutOptions *bannerCellOptions;
@property (copy, nonatomic) HUGridStatusBannerCellLayoutOptions *statusBannerCellOptions;
@property (copy, nonatomic) HUGridWelcomeUIBannerCellLayoutOptions *welcomeUIBannerCellOptions;
@property (readonly, nonatomic) long long viewSizeSubclass;
@property (readonly, nonatomic) long long cellSizeSubclass;
@property (readonly, nonatomic) double gutter;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) double pointWidthForCurrentViewSizeSubclass;
@property (readonly, nonatomic) double pointWidthForFullWidthCell;
@property (readonly, nonatomic) double fixedWidthForCell;
@property (readonly, nonatomic) double cameraCellWidth;
@property (readonly, nonatomic) double cameraCellHeight;
@property (readonly, nonatomic) long long numberOfCameraCellsPerRow;
@property (readonly, nonatomic) double headlineCellHeight;
@property (readonly, nonatomic) double statusListCellHeight;
@property (readonly, nonatomic) double sectionHeaderCellHeight;
@property (readonly, nonatomic) double statusListCellTopMargin;
@property (readonly, nonatomic) double statusListCellBottomMargin;
@property (readonly, nonatomic) double largeTitleCellTopMargin;
@property (nonatomic) unsigned long long contentColorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOptionsForViewSize:(struct CGSize { double x0; double x1; })a0 columnStyle:(unsigned long long)a1 overrideSizeSubclass:(id)a2;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x0; double x1; })a0;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x0; double x1; })a0 columnStyle:(unsigned long long)a1;
+ (unsigned long long)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)a0;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x0; double x1; })a0 overrideSizeSubclass:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)pointWidthForWelcomeUIBanner;
- (double)pointWidthForNumberOfColumns:(long long)a0;
- (id)initWithViewSize:(struct CGSize { double x0; double x1; })a0 columnStyle:(unsigned long long)a1 overrideSizeSubclass:(id)a2;
- (id)_childDisplayOptions;
- (double)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(double)a0 totalNumberOfColumns:(long long)a1 totalWidth:(double)a2 useDefaultSectionMargin:(BOOL)a3;
- (double)_pointWidthForFractionalNumberOfColumns:(double)a0;
- (double)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(double)a0;
- (double)_preferredSectionHeightForNumberOfRows:(unsigned long long)a0 withCellHeight:(double)a1;
- (id)_columnStyleToString:(unsigned long long)a0;
- (double)preferredSectionHeightForNumberOfSceneRows:(unsigned long long)a0;
- (double)preferredSectionHeightForNumberOfServiceRows:(unsigned long long)a0 spanningColumns:(unsigned long long)a1;

@end
