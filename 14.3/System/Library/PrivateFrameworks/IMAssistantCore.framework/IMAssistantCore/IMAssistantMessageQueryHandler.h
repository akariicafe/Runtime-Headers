@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler

- (BOOL)resolvePersons:(id)a0 forIntent:(id)a1 completionHandler:(id /* block */)a2;
- (void)searchMessagesWithContents:(id)a0 messageIdentifiers:(id)a1 notificationIdentifiers:(id)a2 chatNames:(id)a3 conversationIdentifiers:(id)a4 recipients:(id)a5 senders:(id)a6 dateTimeRange:(id)a7 attributes:(unsigned long long)a8 completion:(id /* block */)a9;
- (id)chatsForChatNames:(id)a0;
- (void)SPIQueryMessagesWithGUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handlesAndServicesForChatGuids:(id)a0 handles:(id *)a1 services:(id *)a2;
- (void)SPIQueryMessagesForChatsWithIdentifiers:(id)a0 services:(id)a1 onlyUnread:(BOOL)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (id)allIMHandlesForHandle:(id)a0;
- (void)handlesAndServicesForPersons:(id)a0 handles:(id *)a1 services:(id *)a2;
- (id)unifiedContactIdentifiersForPerson:(id)a0;
- (id)spokenPhrasesForSpeakableStrings:(id)a0;
- (id)vocabularyIdentifiersFromSpeakableStrings:(id)a0;
- (id)chatParticipantForSPIHandle:(id)a0;
- (id)messageContentsPredicate:(id)a0;
- (id)recipientsPredicate:(id)a0;
- (id)sendersPredicate:(id)a0;
- (BOOL)messageIsFromBlackholedChat:(id)a0;
- (id)chatParticipantsForSPIHandles:(id)a0;
- (void)messagesMatchingMessageIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)SPIQueryMessagesForChats:(id)a0 onlyUnread:(BOOL)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (id)chatsWithConversationIdentifiers:(id)a0;
- (id)chatsContainingRequiredParticipants:(id)a0;
- (void)SPIQueryMessagesForSenders:(id)a0 onlyUnread:(BOOL)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)SPIQueryUnreadMessages:(long long)a0 completion:(id /* block */)a1;
- (void)SPIQueryMessagesWithRowIDs:(id)a0 completion:(id /* block */)a1;
- (id)resolveDateTimeRange:(id)a0;

@end
