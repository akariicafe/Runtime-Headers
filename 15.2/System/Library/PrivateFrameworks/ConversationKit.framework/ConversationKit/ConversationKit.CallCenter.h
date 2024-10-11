@interface ConversationKit.CallCenter : NSObject <TUAudioDeviceControllerDelegate, TUConversationManagerDelegate, TUConversationMediaControllerDelegate, TURouteControllerDelegate> {
    void /* unknown type, empty encoding */ tuCallCenter;
    void /* unknown type, empty encoding */ delegate;
}

- (void)conversationManager:(id)a0 remoteMembersChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 activeRemoteParticipantsChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 activitySessionsChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 letMeInRequestStateChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 localVideoToggledForConversation:(id)a1;
- (void)conversationManager:(id)a0 linkChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 pendingMembersChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 oneToOneModeChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 rejectedMembersChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 otherInvitedHandlesChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 linkInvitedMemberHandlesChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 migratingFromConversation:(id)a1 toConversation:(id)a2;
- (void)conversationManager:(id)a0 conversation:(id)a1 remoteParticipantWithIdentifier:(unsigned long long)a2 updatedAudioEnabled:(BOOL)a3;
- (void)conversationManager:(id)a0 conversation:(id)a1 remoteParticipantWithIdentifier:(unsigned long long)a2 updatedVideoEnabled:(BOOL)a3;
- (void)conversationManager:(id)a0 conversation:(id)a1 participant:(id)a2 addedNotice:(id)a3;
- (void)conversationManager:(id)a0 conversation:(id)a1 buzzedMember:(id)a2;
- (void)conversationManager:(id)a0 conversation:(id)a1 updatedMessagesGroupPhoto:(id)a2;
- (void)conversationManager:(id)a0 conversation:(id)a1 launchStateChanged:(unsigned long long)a2 forActivitySession:(id)a3;
- (void)conversationManager:(id)a0 remoteScreenShareAttributesChanged:(id)a1 isLocallySharing:(BOOL)a2;
- (void)conversationManager:(id)a0 ignoreLMIRequestsChangedForConversation:(id)a1;
- (void)routesChangedForRouteController:(id)a0;
- (void)audioDeviceControllerMutedTalkerDidStart:(id)a0;
- (void)audioDeviceControllerMutedTalkerDidEnd:(id)a0;
- (void)mediaController:(id)a0 participantMediaPrioritiesChangedForConversation:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
