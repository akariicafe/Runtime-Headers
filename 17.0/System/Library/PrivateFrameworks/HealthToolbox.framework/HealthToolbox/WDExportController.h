@class WDExportManager, NSURL, UIView, UIViewController;

@interface WDExportController : NSObject {
    WDExportManager *_exportManager;
    unsigned long long _backgroundTask;
    unsigned long long _exportResult;
    NSURL *_exportFileURL;
    BOOL _isExporting;
    UIView *_exportSourceView;
    UIViewController *_exportPresentingViewController;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)_beginExport;
- (void)_cleanUpExport;
- (void)_shareExportFileAndCleanUp;
- (BOOL)exportInProgress;
- (void)verifyExportWithPresentingViewController:(id)a0 shareSheetSourceView:(id)a1;

@end
