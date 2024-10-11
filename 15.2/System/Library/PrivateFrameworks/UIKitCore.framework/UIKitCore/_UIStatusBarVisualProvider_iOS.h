@class _UIStatusBar, NSArray, NSString, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarDisplayItemPlacementNetworkGroup, _UIStatusBarAnimation;

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider>

@property (class, readonly) double height;

@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *secondaryWifiGroup;
@property (readonly) BOOL hasCellularCapability;
@property (readonly) BOOL wantsExpandedLeadingPlacements;
@property (readonly) double itemSpacing;
@property (readonly) double expandedItemSpacing;
@property (readonly) double regionSpacing;
@property (readonly) double bluetoothPaddingInset;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL onLockScreen;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementNetworkGroup *expandedNetworkGroup;
@property (readonly, nonatomic) NSArray *expandedCellularPlacementsAffectedByAirplaneMode;
@property (readonly, nonatomic) NSArray *expandedLeadingPlacements;
@property (readonly, nonatomic) NSArray *expandedTrailingPlacements;
@property (readonly, nonatomic) _UIStatusBarAnimation *animationForAirplaneMode;
@property (readonly, nonatomic) double airplaneObstacleFadeOutDuration;
@property (readonly, nonatomic) double airplaneObstacleFadeInDuration;
@property (readonly, nonatomic) _UIStatusBarAnimation *animationForProminentLocation;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;
+ (double)cornerRadius;

- (double)airplaneSpeedForAnimationType:(long long)a0;
- (void)updateDataForService:(id)a0;
- (id)styleAttributesForStyle:(long long)a0;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)a0;
- (void)modeUpdatedFromMode:(long long)a0;
- (id)willUpdateWithData:(id)a0;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)setupInContainerView:(id)a0;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)a0 animationType:(long long)a1;
- (void)_createExpandedPlacements;
- (void)_applyToAppearingRegions:(BOOL)a0 block:(id /* block */)a1;
- (void)updateDataForSystemNavigation:(id)a0;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (double)airplaneShouldFadeForAnimationType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
