@class CNContactStore, NSString;

@interface CNAssistantCommandUpdatePerson : SADomainObjectUpdate <CNAssistantCommand> {
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validate;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)addToUpdatesCache;
- (id)validateIdentifier;

@end
