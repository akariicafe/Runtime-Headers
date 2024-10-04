@class NSString, BCSIconRemoteFetch;

@interface BCSIconController : NSObject <BCSIconControllerProtocol>

@property (retain, nonatomic) BCSIconRemoteFetch *iconRemoteFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;

@end
