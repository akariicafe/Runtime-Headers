@interface DDURLPreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)validatedURLWithURL:(id)a0 result:(struct __DDResult { } *)a1;

- (void)safariViewControllerDidFinish:(id)a0;
- (id)menuActions;
- (void)setPreviewMode:(BOOL)a0;
- (id)commitURL;
- (id)createViewController;
- (BOOL)requiresEmbeddingNavigationController;
- (BOOL)showMenuTitle;

@end
