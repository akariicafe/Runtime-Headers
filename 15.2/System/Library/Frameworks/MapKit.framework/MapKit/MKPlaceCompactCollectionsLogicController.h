@class MKPlaceBatchController, NSArray, UIFont, GEOGuideLocation, NSString;
@protocol MKPlaceBatchConsumer;

@interface MKPlaceCompactCollectionsLogicController : NSObject <MKPlaceBatchConsumer, MKCompactCollectionDataProvider, MKCompactCollectionDataUpdater>

@property (nonatomic) long long context;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) NSArray *batchableLocations;
@property (retain, nonatomic) NSArray *flattenedIdentifiersForBatching;
@property (retain, nonatomic) MKPlaceBatchController *batchController;
@property (weak, nonatomic) id<MKPlaceBatchConsumer> guideConsumer;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subTitleFont;
@property (retain, nonatomic) GEOGuideLocation *selectedGuideLocation;
@property (nonatomic) unsigned long long initialDisplayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (void)willDisplayCellAtIndexpath:(id)a0;
- (id)buildViewModelsFromGuideLocations:(id)a0;
- (id)buildBatchingStructureForResult:(id)a0;
- (void)createBatchControllerIfNeededUsingIdentifiers:(id)a0 usingCollectionFetcher:(id)a1 usingGuideConsumer:(id)a2 batchSize:(unsigned long long)a3;
- (id)titleForSectionFromTitle:(id)a0;
- (id)compactCollectionsInSection:(unsigned long long)a0;
- (id)compactCollectionAtIndex:(unsigned long long)a0 sectionIndex:(unsigned long long)a1;
- (void)dismissedCompactCollections;
- (id)initWithGuideLocations:(id)a0 context:(long long)a1;
- (id)initWithGuideLocationsResult:(id)a0 context:(long long)a1 usingCollectionFetcher:(id)a2 usingGuideConsumer:(id)a3 usingBatchSize:(unsigned long long)a4 selectedGuideLocation:(id)a5;
- (void).cxx_destruct;
- (void)initializeFonts;
- (void)shouldConsumeBatch:(BOOL)a0 fetchedBatch:(id)a1;

@end
