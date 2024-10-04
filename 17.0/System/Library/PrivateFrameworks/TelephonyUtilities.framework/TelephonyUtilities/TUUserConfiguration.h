@interface TUUserConfiguration : TUConfiguration

+ (id)userDefaults;
+ (id)registeredDefaults;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)synchronize;

@end
