@class INUIVoiceShortcutHostViewController, NSString, _UIRemoteViewController, UIViewController;
@protocol INUIEditVoiceShortcutViewControllerDelegate;

@interface INUIEditVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining>

@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController;
@property (retain, nonatomic) UIViewController *currentChildViewController;
@property (weak, nonatomic) id<INUIEditVoiceShortcutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

+ (void)initialize;

- (void).cxx_destruct;
- (void)loadView;
- (void)setChildViewController:(id)a0;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)a0 error:(id)a1;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)a0;
- (id)initWithVoiceShortcut:(id)a0;

@end
