@class VCPSceneProcessingImageManager, VCPObjectPool;

@interface VCPMAEmbeddingAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
    VCPSceneProcessingImageManager *_imageManager;
}

- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1 preferANE:(BOOL)a2;
- (void)analyzeWithImageURL:(id)a0 requestTypes:(unsigned long long)a1 reencode:(BOOL)a2 completionHandler:(id /* block */)a3;
- (int)_loadImageURL:(id)a0 withSession:(id)a1 reencodedImageData:(id *)a2 andRequestHandler:(id *)a3;
- (void).cxx_destruct;
- (id)init;

@end
