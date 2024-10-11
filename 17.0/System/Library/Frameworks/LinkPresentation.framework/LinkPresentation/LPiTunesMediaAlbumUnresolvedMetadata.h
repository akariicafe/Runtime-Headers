@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaAlbumUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (retain, nonatomic) NSArray *offers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolve;
- (void).cxx_destruct;
- (id)assetsToFetch;

@end
