@protocol EMMutableDictionaryProtocol;

@interface EMListUnsubscribeDetector : NSObject {
    id<EMMutableDictionaryProtocol> _persistentDictionary;
}

+ (id)receivingAccountFromMessage:(id)a0;

- (id)initWithMutableDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)commandForMessage:(id)a0;
- (BOOL)_shouldIgnoreMessageWithHeaders:(id)a0;
- (id)_persistentKeyForHeaders:(id)a0;
- (id)_normalizedAddress:(id)a0;
- (id)_listIDString:(id)a0;
- (id)_senderString:(id)a0;
- (void)acceptCommand:(id)a0;
- (void)ignoreCommand:(id)a0;
- (void)removeAllPersistedCommands;

@end
