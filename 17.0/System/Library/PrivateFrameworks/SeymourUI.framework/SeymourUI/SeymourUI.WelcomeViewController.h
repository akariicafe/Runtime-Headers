@interface SeymourUI.WelcomeViewController : SMUOBWelcomeController {
    void /* unknown type, empty encoding */ dismissHandler;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ privacyPreferenceClient;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ metricPage;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)didTapContinueButton;

@end
