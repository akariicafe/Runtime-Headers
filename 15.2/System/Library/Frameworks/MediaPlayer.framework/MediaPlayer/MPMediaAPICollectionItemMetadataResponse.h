@class NSDictionary, NSArray;

@interface MPMediaAPICollectionItemMetadataResponse : NSObject

@property (readonly, nonatomic) BOOL isFinalResponse;
@property (readonly, nonatomic) double playbackAuthorizationTokenHalfLifeExpiration;
@property (readonly, copy, nonatomic) NSDictionary *response;
@property (readonly, copy, nonatomic) NSArray *failedItemIdentifiers;

- (id)initWithMediaAPICollectionItemMetadataResponse:(id)a0 authorizationTokenHalfLifeDuration:(double)a1 failedItemIdentifiers:(id)a2 isFinalResponse:(BOOL)a3;
- (void).cxx_destruct;

@end
