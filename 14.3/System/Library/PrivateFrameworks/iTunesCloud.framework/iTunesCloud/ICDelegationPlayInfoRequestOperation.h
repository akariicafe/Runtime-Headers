@class ICDelegationPlayInfoRequest, ICStoreRequestContext;

@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation {
    ICDelegationPlayInfoRequestOperation *_strongSelf;
}

@property (copy, nonatomic) ICDelegationPlayInfoRequest *playInfoRequest;
@property (retain, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (void)_finishWithResult:(BOOL)a0 tokens:(id)a1 error:(id)a2;
- (void)finishWithResponse:(id)a0 requestDate:(id)a1 error:(id)a2;

@end
