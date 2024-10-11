@class NSString, UIDocumentInteractionController;

@interface SUDocumentInteractionSession : NSObject <UIDocumentInteractionControllerDelegate> {
    UIDocumentInteractionController *_documentInteractionController;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)documentInteractionControllerDidDismissOpenInMenu:(id)a0;
- (void)documentInteractionController:(id)a0 willBeginSendingToApplication:(id)a1;
- (void)dealloc;
- (void)cancel;
- (id)initWithDocumentInteractionController:(id)a0;

@end
