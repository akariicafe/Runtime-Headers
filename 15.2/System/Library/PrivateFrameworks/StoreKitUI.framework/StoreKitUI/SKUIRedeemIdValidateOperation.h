@class NSDictionary, NSString;

@interface SKUIRedeemIdValidateOperation : ISOperation <ISDialogOperationDelegate>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (copy) id /* block */ resultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_subOperation;
- (void)_logResultsForSuccess:(BOOL)a0 failureReason:(id)a1 failureMessage:(id)a2 error:(id)a3;
- (void)_handleFailure:(id)a0 serverDialogDictionary:(id)a1;
- (void)operation:(id)a0 selectedButton:(id)a1;

@end
