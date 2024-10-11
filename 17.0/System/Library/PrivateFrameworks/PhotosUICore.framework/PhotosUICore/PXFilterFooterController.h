@class UIView, NSString, PXActionManager, PXFilterFooterView, PXContentFilterState, PHPhotoLibrary, PXSharedLibraryStatusProvider, PXLibraryFilterState;

@interface PXFilterFooterController : NSObject <PXFilterFooterViewDelegate> {
    PXActionManager *_actionManager;
    PHPhotoLibrary *_photoLibrary;
    PXFilterFooterView *_footerFilterView;
}

@property (readonly, nonatomic) PXFilterFooterView *footerFilterView;
@property (retain, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (copy, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (copy, nonatomic) PXContentFilterState *contentFilterState;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
