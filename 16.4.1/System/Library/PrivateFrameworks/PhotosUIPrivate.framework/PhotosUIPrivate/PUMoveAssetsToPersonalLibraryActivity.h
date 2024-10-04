@class UIViewController;

@interface PUMoveAssetsToPersonalLibraryActivity : PXActivity {
    UIViewController *_presenterViewController;
}

- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_multiContributorConfirmationAlertControllerForAssets:(id)a0 contributorName:(id)a1 completion:(id /* block */)a2;

@end
