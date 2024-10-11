@class NSString, ISPlayerItem, ISLivePhotoUIView, PXImageRequester, UIView, ISLivePhotoPlayer;

@interface PXAssetLivePhotoUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile> {
    unsigned long long _requestCount;
    long long _livePhotoRequestID;
    ISLivePhotoUIView *_livePhotoView;
    ISLivePhotoPlayer *_livePhotoPlayer;
}

@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_requestLivePhotoIfNeeded;
- (void)_handleLivePhotoResult:(id)a0 info:(id)a1 expectedRequestCount:(unsigned long long)a2 expectedRequestID:(long long)a3;
- (struct CGSize { double x0; double x1; })_targetSize;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_updateLivePhotoView;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
