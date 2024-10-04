@class UIStackView, NSString, PKDrawingPaletteInputAssistantContainerView, PKPaletteAdditionalOptionsView, PKPaletteColorPickerView, PKPaletteInputAssistantViewController;
@protocol PKDrawingPaletteViewStateSubject, PKPaletteColorPickerContainerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPalettePopoverPresenting;

@interface PKPaletteColorPickerContainerView : UIView <UIPopoverPresentationControllerDelegate, PKPalettePopoverDismissing>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteAdditionalOptionsView *additionalOptionsView;
@property (retain, nonatomic) PKDrawingPaletteInputAssistantContainerView *inputAssistantContainerView;
@property (retain, nonatomic) PKPaletteInputAssistantViewController *inputAssistantViewController;
@property (weak, nonatomic) id<PKPaletteColorPickerContainerViewDelegate> delegate;
@property (weak, nonatomic) id<PKDrawingPaletteViewStateSubject> paletteViewState;
@property (readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property (weak, nonatomic) id<PKPalettePopoverPresenting> palettePopoverPresenting;
@property (weak, nonatomic) id<PKPaletteAdditionalOptionsViewDelegate> additionalOptionsViewDelegate;
@property (nonatomic) BOOL shouldHideColorPicker;
@property (nonatomic) BOOL shouldShowAdditionalOptionsView;
@property (nonatomic) BOOL shouldShowInputAssistantView;
@property (nonatomic) long long layoutAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)_installAdditionalOptionsView;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (BOOL)_isAdditionalOptionsViewInstalled;
- (void)_uninstallAdditionalOptionsView;
- (void)_installInputAssistantViewContainer;
- (void)_handleUCBButtonPressed;
- (void)_showInputAssistantPopover;
- (BOOL)_isInputAssistantViewControllerPresented;
- (void)_dismissViewController:(id)a0 withCompletion:(id /* block */)a1;

@end
