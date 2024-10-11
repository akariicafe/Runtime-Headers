@class NSArray, UIScrollView, UIPanGestureRecognizer, _UIFocusEngineJoystickGestureRecognizer;

@interface _UIFocusFastScrollingRequest : NSObject

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) NSArray *arrowButtonGestures;
@property (retain, nonatomic) _UIFocusEngineJoystickGestureRecognizer *joystickGesture;
@property (nonatomic) long long scrollingType;
@property (nonatomic) unsigned long long heading;
@property (nonatomic) unsigned long long allowedHeadings;
@property (nonatomic) BOOL indexBarAnimatesEmphasisOnDisplay;
@property (copy, nonatomic) id /* block */ didBeginCallback;
@property (copy, nonatomic) id /* block */ didEndCallback;

- (void).cxx_destruct;
- (id)init;

@end
