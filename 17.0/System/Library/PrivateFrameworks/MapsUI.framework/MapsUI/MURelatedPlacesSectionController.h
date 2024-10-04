@class MUPlaceSectionView, MURelatedPlaceSectionControllerConfiguration, MUPlaceTilesView, MUPlaceSectionHeaderViewModel, UIViewController, UIView, GEORelatedPlaceModuleConfiguration, NSString, MUPlaceTilesListView, NSArray, MUPlaceCallToActionAppearance, GEORelatedPlaceList, MUPlaceSectionFooterViewModel;
@protocol MKMapServiceTicket, MUInfoCardAnalyticsDelegate, MURelatedPlacesSectionControllerDelegate;

@interface MURelatedPlacesSectionController : MUPlaceSectionController <MUPlaceTilesViewDelegate, MUPlaceTilesListViewDelegate, MUScrollAnalyticActionObserving, MUPlaceSectionControlling> {
    id<MKMapServiceTicket> _ticket;
    id<MKMapServiceTicket> _nearbyPlacesTicket;
    NSArray *_mapItemList;
    MUPlaceSectionView *_sectionView;
    MURelatedPlaceSectionControllerConfiguration *_configuration;
    MUPlaceTilesView *_tilesView;
    MUPlaceTilesListView *_listView;
}

@property (readonly, nonatomic) BOOL needsToPerformRefinement;
@property (readonly, nonatomic) GEORelatedPlaceList *effectiveRelatedPlaceList;
@property (readonly, nonatomic) GEORelatedPlaceModuleConfiguration *moduleConfig;
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;
@property (retain, nonatomic) GEORelatedPlaceList *relatedPlaceListFromFollowUpRequest;
@property (nonatomic) BOOL isFollowUpRequestInProgress;
@property (nonatomic) BOOL hasFetchedFollowUpRequest;
@property (weak, nonatomic) id<MURelatedPlacesSectionControllerDelegate> relatedPlacesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void).cxx_destruct;
- (void)_buildInitialContent;
- (void)_cancelFollowUpRequestIfNeeded;
- (void)_cancelPlaceRefinementIfNeeded;
- (void)_displayTilesForViewModels:(id)a0;
- (void)_handleViewModel:(id)a0;
- (id)_moduleTitle;
- (void)_notifyDelegateForSeeAll;
- (void)_notifyDelegateOfSelectedMapItem:(id)a0;
- (void)_populateAnalyticsModule:(id)a0;
- (void)_refineHikingTrailListWithCompletion:(id /* block */)a0;
- (void)_refinePlaceAndNotifyDelegate:(id)a0;
- (void)_refineRelatedPlaceListWithCompletion:(id /* block */)a0;
- (void)_seeAllTapped;
- (void)_setupSectionView;
- (void)_updateSection;
- (void)_updateWithListFromFollowUpRequest:(id)a0;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (unsigned long long)numInlineItems;
- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;
- (void)performNearbyPlacesFollowUpRequest;
- (void)placeTileCollectionView:(id)a0 didTapOnAccessoryViewModel:(id)a1;
- (void)placeTileCollectionView:(id)a0 didTapOnViewModel:(id)a1;
- (void)placeTilesListView:(id)a0 didSelectViewModel:(id)a1;

@end
