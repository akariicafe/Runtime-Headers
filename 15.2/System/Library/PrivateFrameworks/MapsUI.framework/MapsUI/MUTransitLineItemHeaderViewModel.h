@class NSString, NSArray, MULabeledTokenViewModel;
@protocol GEOTransitLineItem;

@interface MUTransitLineItemHeaderViewModel : NSObject <MUPlaceHeaderViewModel> {
    id<GEOTransitLineItem> _lineItem;
}

@property (readonly, nonatomic) BOOL hasHeroImage;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic) BOOL hasInitialData;
@property (readonly, nonatomic) NSString *placeName;
@property (readonly, nonatomic) NSString *placeSecondaryName;
@property (readonly, nonatomic) BOOL hasEnclosingPlace;
@property (readonly, nonatomic) MULabeledTokenViewModel *enclosingPlaceViewModel;
@property (readonly, nonatomic) NSArray *transitLabelItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTransitLineItem:(id)a0;
- (void)loadHeroImageWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)enclosingPlaceAttributedStringWithFont:(id)a0 labelColor:(id)a1 tokenColor:(id)a2;
- (void)refineEnclosingMapItemWithCompletion:(id /* block */)a0;

@end
