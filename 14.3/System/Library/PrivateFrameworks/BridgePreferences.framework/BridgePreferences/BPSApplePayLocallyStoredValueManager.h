@interface BPSApplePayLocallyStoredValueManager : NSObject

+ (id)remoteLocallyStoredValuePassNames;
+ (void)_presentApplePayLocallyStoredValueWarningInController:(id)a0 unableToConnect:(BOOL)a1 legacyDevice:(BOOL)a2 withCompletion:(id /* block */)a3;
+ (void)_attemptToMarkAllAppletsForDeletionWithCompletion:(id /* block */)a0;
+ (void)presentApplePayLocallyStoredValueOfflineWarningIfNeededInController:(id)a0 forPairedDevice:(id)a1 withCompletion:(id /* block */)a2;

@end
