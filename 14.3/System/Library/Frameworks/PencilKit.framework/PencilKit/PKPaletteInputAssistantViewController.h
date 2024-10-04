@class NSString, PKDrawingPaletteInputAssistantView;

@interface PKPaletteInputAssistantViewController : UIViewController <PKDrawingPaletteInputAssistantViewStateObserver>

@property (retain, nonatomic) PKDrawingPaletteInputAssistantView *inputAssistantView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateUI;
- (struct CGSize { double x0; double x1; })_preferredContentSize;
- (void)viewDidLoad;
- (void)paletteInputAssistantViewDidChangeViewState:(id)a0;

@end
