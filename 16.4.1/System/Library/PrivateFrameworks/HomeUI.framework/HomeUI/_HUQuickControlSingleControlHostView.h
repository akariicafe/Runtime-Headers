@class UIView, NAUILayoutConstraintSet;
@protocol HULayoutAnchorProviding;

@interface _HUQuickControlSingleControlHostView : UIView

@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet;
@property (retain, nonatomic) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (readonly, nonatomic) UIView *contentView;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithContentView:(id)a0;
- (void)didMoveToWindow;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_setupConstraintSet;
- (BOOL)hasSingleControlView;

@end
