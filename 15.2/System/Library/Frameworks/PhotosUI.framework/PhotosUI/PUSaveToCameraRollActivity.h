@class NSString;
@protocol PXActivityItemSourceController;

@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity <PXActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (BOOL)_itemIsVideoAtURL:(id)a0;

@end
