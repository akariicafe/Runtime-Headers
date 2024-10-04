@class NSString, LPiTunesMediaAsset;

@interface LPiTunesMediaPlaylistUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *curator;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)assetsToFetch;
- (id)resolve;

@end
