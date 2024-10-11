@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SRUIFConversationStore : NSObject

@property (readonly, nonatomic, getter=_conversationsByIdentifier) NSMutableDictionary *conversationsByIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (void)_registerConversation:(id)a0 withIdentifier:(id)a1;
- (void)removeConversationWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveConversation:(id)a0 withIdentifier:(id)a1 completionBlock:(id /* block */)a2;
- (void)fetchConversationWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;

@end
