@class NSURLSession, NSDateFormatter, NSString, NSURL;

@interface WFTrelloSessionManager : NSObject

@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) NSString *token;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 token:(id)a1;
- (void)getOpenBoardsWithCompletionHandler:(id /* block */)a0;
- (void)getListsForBoard:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCardsForList:(id)a0 completionHandler:(id /* block */)a1;
- (void)getUserWithCompletionHandler:(id /* block */)a0;
- (void)createBoardWithName:(id)a0 boardDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void)createListWithName:(id)a0 onBoardWithIdentifier:(id)a1 position:(id)a2 completionHandler:(id /* block */)a3;
- (void)createCardWithName:(id)a0 listIdentifier:(id)a1 dueDate:(id)a2 cardPosition:(id)a3 cardDescription:(id)a4 completionHandler:(id /* block */)a5;
- (void)uploadFile:(id)a0 onCard:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAttachmentsOnCard:(id)a0 completionHandler:(id /* block */)a1;
- (void)lookupCardWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestPath:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;

@end
