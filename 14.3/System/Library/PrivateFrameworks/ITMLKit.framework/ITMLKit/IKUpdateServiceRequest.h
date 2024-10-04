@class NSString, IKJSViewModelLink;

@interface IKUpdateServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {
    IKJSViewModelLink *_link;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)onSend;
- (void)documentDidChangeForViewModelLink:(id)a0;
- (void)didCloseViewModelLink:(id)a0 withErrorDictionary:(id)a1;
- (void)onCancel;

@end
