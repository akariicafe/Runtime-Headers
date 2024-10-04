@class UIButton, UILabel, UIView, WFOverlayImageEditorOptionButton;
@protocol WFOverlayImageEditorOptionsViewDelegate;

@interface WFOverlayImageEditorOptionsView : UIView

@property (readonly, weak, nonatomic) WFOverlayImageEditorOptionButton *rotationButton;
@property (readonly, weak, nonatomic) WFOverlayImageEditorOptionButton *resetButton;
@property (readonly, weak, nonatomic) WFOverlayImageEditorOptionButton *opacityButton;
@property (readonly, weak, nonatomic) UIView *topBorder;
@property (readonly, weak, nonatomic) UILabel *nextLabel;
@property (readonly, weak, nonatomic) UIButton *cancelButton;
@property (readonly, weak, nonatomic) UIButton *nextButton;
@property (weak, nonatomic) id<WFOverlayImageEditorOptionsViewDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)didTapResetButton;
- (void)didTapRotationButton;
- (void)didTapOpacityButton;
- (void)didTapCancelButton;
- (void)didTapNextButton;

@end
