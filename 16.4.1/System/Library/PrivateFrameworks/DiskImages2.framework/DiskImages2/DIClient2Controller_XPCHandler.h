@interface DIClient2Controller_XPCHandler : DIBaseXPCHandler

- (id)remoteObjectInterface;
- (BOOL)connectWithError:(id *)a0;
- (id)serviceName;
- (BOOL)GUIAskForPassphraseWithEncryptionFrontend:(id)a0 error:(id *)a1;
- (BOOL)createAndStoreInSystemKeychainWithCreator:(id)a0 account:(id)a1 error:(id *)a2;
- (BOOL)keychainUnlockWithEncryptionUnlocker:(id)a0 error:(id *)a1;
- (id)newAttachWithParams:(id)a0 error:(id *)a1;

@end
