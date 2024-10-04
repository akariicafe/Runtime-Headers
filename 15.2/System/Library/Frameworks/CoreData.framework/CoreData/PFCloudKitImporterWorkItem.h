@class PFCloudKitImporterOptions, NSCloudKitMirroringImportRequest;

@interface PFCloudKitImporterWorkItem : NSObject {
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
}

- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (id)initWithOptions:(id)a0 request:(id)a1;
- (void)dealloc;

@end
