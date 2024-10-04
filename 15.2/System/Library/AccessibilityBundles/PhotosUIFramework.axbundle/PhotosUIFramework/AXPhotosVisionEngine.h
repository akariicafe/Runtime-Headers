@class AXMFaceDetectorNode, AXMVisionEngine, AXMImageNode;

@interface AXPhotosVisionEngine : NSObject

@property (retain, nonatomic) AXMVisionEngine *engine;
@property (retain, nonatomic) AXMImageNode *imageNode;
@property (retain, nonatomic) AXMFaceDetectorNode *faceNode;

+ (id)sharedEngine;

- (void).cxx_destruct;
- (id)init;
- (void)analyzeImage:(id)a0 completion:(id /* block */)a1;

@end
