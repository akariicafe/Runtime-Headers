@class SKUIRedeemConfiguration, NSString, SKUIClientContext, SKUIRedeemViewControllerLegacy, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIRedeemPreflightOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _loadsRedeemCodeMetadata;
    id /* block */ _outputBlock;
    NSString *_redeemCode;
    SKUIRedeemConfiguration *_redeemConfiguration;
}

@property (nonatomic) BOOL forcesAuthentication;
@property BOOL loadsRedeemCodeMetadata;
@property (weak, nonatomic) SKUIRedeemViewControllerLegacy *redeemViewController;
@property (retain) SKUIRedeemConfiguration *redeemConfiguration;
@property (copy) id /* block */ outputBlock;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)_authenticationContext;
- (id)initWithClientContext:(id)a0 redeemCode:(id)a1 forcesAuthentication:(BOOL)a2;
- (id)_initSKUIRedeemPreflightOperation;
- (id)_redeemCodeMetadataWithClientContext:(id)a0;

@end
