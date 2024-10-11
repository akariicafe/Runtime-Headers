@class ICUserIdentity, NSDate;

@interface MPServerObjectDatabaseImportRequest : NSObject

@property (readonly, copy, nonatomic) NSDate *assetURLExpirationDate;
@property (readonly, copy, nonatomic) NSDate *playbackAuthorizationTokenHalfLifeDate;
@property (retain, nonatomic) id payload;
@property (retain, nonatomic) ICUserIdentity *userIdentity;
@property (copy, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)_initWithPayload:(id)a0;

@end
