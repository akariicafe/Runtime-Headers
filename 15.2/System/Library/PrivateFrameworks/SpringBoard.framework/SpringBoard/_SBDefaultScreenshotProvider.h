@class UIScreen, SBScreenFlash, NSString;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider>

@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) SBScreenFlash *flasher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithScreen:(id)a0;
- (id)captureScreenshot;

@end
