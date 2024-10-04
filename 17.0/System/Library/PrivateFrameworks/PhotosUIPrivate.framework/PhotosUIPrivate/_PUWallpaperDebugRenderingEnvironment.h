@class NSURL, NSString, PFPosterConfiguration;

@interface _PUWallpaperDebugRenderingEnvironment : NSObject <PUWallpaperRenderingEnvironment>

@property (readonly, nonatomic) NSURL *assetDirectory;
@property (readonly, nonatomic) PFPosterConfiguration *posterConfiguration;
@property (readonly, nonatomic, getter=pu_isSnapshot) BOOL pu_snapshot;
@property (readonly, nonatomic, getter=pu_isPreview) BOOL pu_preview;
@property (nonatomic) unsigned long long pu_significantEventsCounter;
@property (readonly, nonatomic, getter=pu_isPlayground) BOOL pu_playground;
@property (readonly, nonatomic, getter=pu_backlightLuminance) long long pu_backlightLuminance;
@property (readonly, nonatomic) NSURL *pu_assetDirectory;
@property (readonly, nonatomic) long long pu_contentsType;
@property (readonly, nonatomic) long long pu_deviceOrientation;
@property (readonly, nonatomic, getter=pu_isCallServices) BOOL pu_callServices;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pu_floatingObscurableBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPosterConfiguration:(id)a0 assetDirectory:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pu_titleBoundsForLayout:(unsigned long long)a0;

@end
