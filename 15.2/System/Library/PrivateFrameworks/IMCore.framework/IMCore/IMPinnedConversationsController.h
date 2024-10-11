@class NSOrderedSet, NSDictionary, NSUbiquitousKeyValueStore;

@interface IMPinnedConversationsController : NSObject

@property (class, readonly, nonatomic) unsigned long long maximumNumberOfPinnedConversations;

@property (nonatomic) BOOL hasCompletedInitialization;
@property (nonatomic) BOOL hasDefferedPinnedConversationsDidChangeNotification;
@property (nonatomic) long long numberOfPendingForceSyncs;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *dataStore;
@property (retain, nonatomic) NSOrderedSet *pinnedConversationIdentifierSet;
@property (retain, nonatomic) NSDictionary *chatMetadata;

+ (id)sharedInstance;
+ (id)requiredKeys;
+ (long long)currentPinConfigurationVersion;
+ (long long)currentPinConfigurationRevision;
+ (id)pinConfigurationMigrationKey;
+ (id)_forceSyncDispatchQueue;
+ (id)_ubiquitousDispatchQueue;

- (id)matchingIdentifierForChat:(id)a0;
- (id)pinnedConversationIdentifiers;
- (void)conversationsWereDeletedWithIdentifiers:(id)a0;
- (BOOL)shouldSync;
- (void).cxx_destruct;
- (id)init;
- (void)setPinnedChats:(id)a0 withUpdateReason:(id)a1;
- (void)_postDeferredPinnedConversationsDidChangeNotificationIfNecessary;
- (void)imCloudKitHooksSetEnabledDidReturn:(id)a0;
- (void)_handleChatGroupIDDidChangeNotification:(id)a0;
- (void)fetchPinnedConversationIdentifiersFromLocalStore;
- (void)synchronizeLocalDataStore;
- (void)performPinConfigValidationAndMigrationIfNecessary;
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)a0;
- (id)_dictionaryWithPinnedConversationIdentifiers:(id)a0 chatMetadata:(id)a1 updateReason:(id)a2 timestamp:(id)a3;
- (id)_metadataDictionaryForChat:(id)a0;
- (void)_setPinnedConversationIdentifiers:(id)a0 withChatMetadata:(id)a1 updateReason:(id)a2 shouldUpdateStores:(BOOL)a3;
- (id)dictionaryWithPinnedConversationIdentifiers:(id)a0 chatMetadata:(id)a1 updateReason:(id)a2;
- (void)updateStoresWithPinConfiguration:(id)a0;
- (void)_postPinnedConversationsDidChangeNotification;
- (unsigned long long)pinIndexForChat:(id)a0 inIdentifierSet:(id)a1 withMetadata:(id)a2;
- (id)matchingIdentifierForChat:(id)a0 inIdentifierSet:(id)a1 withMetadata:(id)a2;
- (id)_locallyStoredPinConfiguration;
- (id)validatedPinConfigurationWithCurrentVersionForPinConfiguration:(id)a0;
- (id)pinnedConversationIdentifiersFromPinConfiguration:(id)a0;
- (id)chatMetadataFromPinConfiguration:(id)a0;
- (BOOL)pinConfigurationIsValid:(id)a0;
- (BOOL)pinConfigurationHasCurrentVersion:(id)a0;
- (BOOL)_updateLocalStoreWithPinConfiguration:(id)a0;
- (void)fetchMostUpToDatePinConfiguration:(id /* block */)a0;
- (void)_updateUbiquitousStoreWithPinConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldWriteProposedPinConfiguration:(id)a0 toUbiquitousStoreWithExistingPinConfiguration:(id)a1;
- (BOOL)shouldUpdateExistingPinConfig:(id)a0 withProposedPinConfig:(id)a1;
- (void)forceSynchronizeUbiquitousStore;
- (void)_fetchUbiquitousPinConfiguration:(id /* block */)a0;
- (BOOL)pinConfigurationHasCompatibleVersion:(id)a0;
- (id)_ubiquitousPinConfigurationInStore:(id)a0;
- (id)mostUpToDatePinConfigurationByComparingPinConfiguration:(id)a0 toOtherPinConfiguration:(id)a1;
- (void)conversationWasDeletedWithIdentifier:(id)a0;
- (BOOL)pinnedConversationsContainsChat:(id)a0;

@end
