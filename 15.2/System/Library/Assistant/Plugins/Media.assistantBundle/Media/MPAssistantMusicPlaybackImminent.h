@class NSString, ICUserIdentity, NSNumber;

@interface MPAssistantMusicPlaybackImminent : SAMPMusicPlaybackImminent <AFServiceCommand> {
    ICUserIdentity *_userIdentity;
    NSNumber *_privateListeningEnabled;
    NSString *_requestAceHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void)_perform:(id /* block */)a0;
- (void).cxx_destruct;

@end
