@interface StocksCore.IdentificationService : NSObject <FCUserInfoObserving> {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ sensitiveUserDefaults;
    void /* unknown type, empty encoding */ stocksKitDefaults;
    void /* unknown type, empty encoding */ observers;
}

- (void)userInfoDidChangeFeldsparID:(id)a0 fromCloud:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
