@interface DKPromptCloudUploadViewController : OBWelcomeController

@property (copy, nonatomic) id /* block */ uploadThenEraseBlock;
@property (copy, nonatomic) id /* block */ eraseNowBlock;
@property (copy, nonatomic) id /* block */ hasInternetConnectivity;
@property (copy, nonatomic) id /* block */ shouldWarnForDataUsage;
@property (copy, nonatomic) id /* block */ presentNetworkSettings;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)_uploadTapped:(id)a0;
- (void)_eraseTapped:(id)a0;

@end
