@interface ICADIProvisionSession : NSObject {
    unsigned long long _accountID;
    unsigned int _sessionID;
}

- (void)dealloc;
- (id)initWithAccountID:(unsigned long long)a0;
- (void)_destroySession;
- (BOOL)endWithMessageData:(id)a0 transportKey:(id)a1 error:(id *)a2;
- (BOOL)startWithServerActionData:(id)a0 returningClientData:(id *)a1 error:(id *)a2;

@end
