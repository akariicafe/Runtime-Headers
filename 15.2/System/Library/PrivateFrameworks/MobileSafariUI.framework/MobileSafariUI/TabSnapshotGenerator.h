@class NSMutableArray;
@protocol TabSnapshotGeneratorDelegate;

@interface TabSnapshotGenerator : NSObject {
    NSMutableArray *_requestQueue;
}

@property (weak, nonatomic) id<TabSnapshotGeneratorDelegate> delegate;

+ (id)_snapshotRenderingQueue;

- (void).cxx_destruct;
- (id)init;
- (void)snapshotWithRequest:(id)a0 contentProvider:(id)a1 completion:(id /* block */)a2;
- (void)_beginNextItemIfIdle;
- (void)_snapshotItem:(id)a0;
- (void)_didFinishItem:(id)a0 withImage:(id)a1;
- (id)backgroundColorForContentProvider:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForContentProvider:(id)a0 withSnapshotSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)contentShouldUnderlapTopBackdropForContentProvider:(id)a0;
- (id)_renderView:(id)a0 afterScreenUpdates:(BOOL)a1;
- (id)renderSnapshotWithSize:(struct CGSize { double x0; double x1; })a0 backgroundColor:(id)a1 topBackdropHeight:(double)a2 options:(unsigned long long)a3 drawing:(id /* block */)a4;

@end
