@class NSString, _INUIExtensionContextState;
@protocol _INUIRemoteViewControllerServing;

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {
    _INUIExtensionContextState *_currentExtensionContextState;
}

@property (weak, nonatomic) id<_INUIRemoteViewControllerServing> viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (void)configureForParameters:(id)a0 ofInteraction:(id)a1 interactiveBehavior:(unsigned long long)a2 context:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)viewWasCancelled;
- (void)desiresInteractivity:(id /* block */)a0;
- (void)queryRepresentedPropertiesWithCompletion:(id /* block */)a0;
- (void)setExtensionContextState:(id)a0 completion:(id /* block */)a1;
- (id)_errorHandlingHostProxy;
- (struct CGSize { double x0; double x1; })hostedViewMinimumAllowedSize;
- (struct CGSize { double x0; double x1; })hostedViewMaximumAllowedSize;
- (struct CGSize { double x0; double x1; })_bestAllowedSizeForAllowedSizesDictionary:(id)a0;
- (id)interfaceParametersDescription;
- (void)_requestHandlingOfIntent:(id)a0;
- (void)_willBeginEditing;

@end
