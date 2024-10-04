@class NSString, MKSRPServer;
@protocol MKGETSRPRouterDelegate;

@interface MKGETSRPRouter : NSObject <MKHTTPRouter> {
    MKSRPServer *_srp;
}

@property (weak, nonatomic) id<MKGETSRPRouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;
- (id)initWithSRP:(id)a0;

@end
