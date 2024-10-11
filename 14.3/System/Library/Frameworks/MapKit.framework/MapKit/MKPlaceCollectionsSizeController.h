@class NSString;

@interface MKPlaceCollectionsSizeController : NSObject <MKCollectionsSizeProvider>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) double defaultCollectionHeight;
@property (nonatomic) double defaultCollectionWidth;
@property (nonatomic) struct { long long displayStyle; long long collectionsPerRow; } collectionsConfiguration;
@property (nonatomic) BOOL isSingleCollection;
@property (nonatomic) BOOL isMarzipan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)minimumLineSpacing;
- (id)initWithCollectionsConfiguration:(struct { long long x0; long long x1; })a0 isSingleCollection:(BOOL)a1 usingTraitCollections:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForCollectionWithMaxCollectionsWidth:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;
- (double)minimumInterItemSpacing;
- (id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)a0;

@end
