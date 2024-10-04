@class NSArray, UIView;

@interface NAUILayoutConstraintSet : NSObject

@property (copy, nonatomic) NSArray *constraints;
@property (readonly, weak, nonatomic) UIView *owningView;
@property (readonly, copy, nonatomic) id /* block */ builder;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (void)activateIfNeeded;
- (void)invalidate;
- (id)initWithOwningView:(id)a0 constraintBuilder:(id /* block */)a1;
- (void)updateConstraintConstants;

@end
