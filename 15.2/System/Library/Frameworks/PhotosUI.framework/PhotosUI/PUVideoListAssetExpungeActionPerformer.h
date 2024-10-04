@class NSString;
@protocol PUVideoListAssetExpungeActionPerformerDelegate;

@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PUDeletePhotosActionControllerDelegate>

@property (weak, nonatomic) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)deletePhotosActionController:(id)a0 dismissConfirmationViewController:(id)a1;
- (void)deletePhotosActionController:(id)a0 presentConfirmationViewController:(id)a1;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)_performUserInteractionTask;

@end
