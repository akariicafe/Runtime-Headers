@interface _MTLIndirectDrawPatchesArguments : NSObject {
    void *_patchIndexBufferVirtualAddress;
}

@property (nonatomic) unsigned long long numberOfPatchControlPoints;
@property (nonatomic) unsigned long long patchStart;
@property (nonatomic) unsigned long long patchCount;
@property (nonatomic) void *patchIndexBufferVirtualAddress;
@property (nonatomic) unsigned long long patchIndexBufferGPUVirtualAddress;
@property (nonatomic) unsigned long long patchIndexBufferOffset;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long baseInstance;

@end
