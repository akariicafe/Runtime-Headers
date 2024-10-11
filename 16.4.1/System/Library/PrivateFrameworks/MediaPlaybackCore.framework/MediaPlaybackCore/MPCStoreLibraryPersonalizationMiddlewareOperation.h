@class NSArray, NSMapTable, MPCStoreLibraryPersonalizationMiddleware, MPCPlayerRequest, NSError, NSString;

@interface MPCStoreLibraryPersonalizationMiddlewareOperation : MPAsyncOperation <MPMiddlewareAutomaticDependencyOperation>

@property (retain, nonatomic) MPCStoreLibraryPersonalizationMiddleware *middleware;
@property (retain, nonatomic) MPCPlayerRequest *playerRequest;
@property (readonly, nonatomic) NSArray *inputProtocols;
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (retain, nonatomic) NSMapTable *inputOperations;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (id)initWithMiddleware:(id)a0 playerRequest:(id)a1;
- (void).cxx_destruct;

@end
