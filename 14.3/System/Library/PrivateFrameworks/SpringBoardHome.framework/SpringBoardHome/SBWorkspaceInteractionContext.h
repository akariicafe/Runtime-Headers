@class UIGestureRecognizer, UIInteractionProgress;

@interface SBWorkspaceInteractionContext : NSObject

@property (readonly, nonatomic) UIInteractionProgress *interactionProgress;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;

- (void).cxx_destruct;
- (id)initWithInteractionProgress:(id)a0;
- (id)initWithGestureRecognizer:(id)a0;

@end
