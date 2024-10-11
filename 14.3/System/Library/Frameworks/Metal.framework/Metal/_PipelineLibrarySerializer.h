@interface _PipelineLibrarySerializer : NSObject {
    void *_binarySerializer;
}

- (id)init;
- (unsigned long long)totalSize;
- (void)dealloc;
- (unsigned long long)addLibrary:(void *)a0;
- (id)addSpecializedFunction:(id)a0 descriptor:(const void *)a1;
- (id)addRenderPipelineDescriptor:(const void *)a0;
- (id)addComputePipelineDescriptor:(const void *)a0;
- (unsigned long long)writeToMemory:(char *)a0 size:(unsigned long long)a1;

@end
