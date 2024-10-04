@protocol IKJSMenuBarDocumentAppBridge;

@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument>

@property (weak, nonatomic) id<IKJSMenuBarDocumentAppBridge> appBridge;

- (void).cxx_destruct;
- (id)_entityUniqueIdentifierForObject:(id)a0;
- (id)getDocument:(id)a0;
- (void)setDocument:(id)a0 :(id)a1 :(id)a2;
- (id)getSelectedItem;
- (void)setSelectedItem:(id)a0 :(id)a1;

@end
