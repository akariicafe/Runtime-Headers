@class NSString, NSDictionary, NSObject, CIContext;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing> {
    NSObject<OS_dispatch_queue> *_defaultCIContextThreadSafety;
    CIContext *_defaultCIContext;
}

@property BOOL shouldCancelAllRequests;
@property (readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (void)startVideoCompositionRequest:(id)a0;
- (void)renderContextChanged:(id)a0;
- (void)cancelAllPendingVideoCompositionRequests;
- (id)defaultCIContext;

@end
