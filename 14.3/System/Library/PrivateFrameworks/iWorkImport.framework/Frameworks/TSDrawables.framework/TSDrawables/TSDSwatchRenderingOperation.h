@class NSIndexPath, NSString, TSUImage, UIView, NSObject, TSKDocumentRoot;
@protocol TSKAccessControllerReadTicket, TSSPreset, TSDSwatchRenderingOperationDelegate;

@interface TSDSwatchRenderingOperation : NSOperation {
    struct CGImage { } *_deliveredImage;
    TSUImage *_swatch;
    id<TSKAccessControllerReadTicket> _renderingTicket;
}

@property (retain) UIView *view;
@property (readonly) NSObject<TSSPreset> *preset;
@property (readonly) struct CGSize { double width; double height; } imageSize;
@property (readonly) double imageScale;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } swatchFrame;
@property (readonly) TSKDocumentRoot *documentRoot;
@property unsigned long long insertPopoverPageType;
@property unsigned long long insertPopoverPageNumber;
@property (copy) NSString *identifier;
@property (weak, nonatomic) id<TSDSwatchRenderingOperationDelegate> delegate;
@property (readonly, nonatomic) BOOL renderForWideGamut;
@property (readonly, nonatomic) struct CGImage { } *deliveredImage;
@property (nonatomic) BOOL deliversImageAutomatically;
@property (copy, nonatomic) NSIndexPath *targetIndexPath;
@property (nonatomic) BOOL suppressesAnimation;
@property (retain, nonatomic) id<TSKAccessControllerReadTicket> renderingTicket;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchEdgeInsets;
- (BOOL)needsPressedStateBackground;
- (struct CGImage { } *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage { } *)a0;
- (void)p_deliverResultOnMainThread:(id)a0;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 documentRoot:(id)a4;
- (void)deliverCGImage:(struct CGImage { } *)a0;
- (void)p_showSwatchInViewAnimated:(BOOL)a0;
- (void)p_didFinishRendering;
- (id)p_extendedRenderingTicket;
- (BOOL)isReadyToRender;
- (void)deliverSwatch;
- (void)provideSwatchForLaterDelivery:(id)a0;

@end
