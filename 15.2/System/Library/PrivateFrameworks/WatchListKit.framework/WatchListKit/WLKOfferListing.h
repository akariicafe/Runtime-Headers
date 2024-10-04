@class NSArray, WLKStoreOffer;

@interface WLKOfferListing : NSObject

@property (readonly, copy, nonatomic) NSArray *storeOffers;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreRentalOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreBuyOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreGetOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreRedownloadOffer;

- (void).cxx_destruct;
- (id)initWithMAPIDictionaries:(id)a0;
- (id)_storeOffersFromMAPIDictionaries:(id)a0;
- (id)_bestStoreOfferForOfferType:(unsigned long long)a0;
- (BOOL)_prefersSD;
- (id)_highDefinitionPredicate;
- (id)_standardDefinitionPredicate;
- (id)_filteredStoreContentSource:(id)a0;

@end
