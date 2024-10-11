@class NSString, PKScribbleInteraction, UIView;
@protocol UIInteraction;

@interface PKScribbleInteractionWrapper : NSObject <PKScribbleInteractionWrapper> {
    PKScribbleInteraction *_interaction;
}

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *interactionView;
@property (readonly, nonatomic) id<UIInteraction> interaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportsShouldBegin;
- (BOOL)shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)willBeginWritingInElement:(id)a0;
- (void)didFinishWritingInElement:(id)a0;
- (void)requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)focusElement:(id)a0 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 element:(id)a1;
- (BOOL)beginSuppressingPlaceholderForElement:(id)a0;
- (BOOL)supportsIsElementFocused;
- (void)endSuppressingPlaceholderForElement:(id)a0;
- (BOOL)shouldDisableInputAssistant;
- (void)didTargetElement:(id)a0 forTouches:(id)a1 event:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElement:(id)a0;
- (BOOL)isEnabled;
- (BOOL)isElementFocused:(id)a0;
- (BOOL)isElementContainer;
- (BOOL)focusWillTransformElement:(id)a0;
- (id)initWithScribbleInteraction:(id)a0;

@end
