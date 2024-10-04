@class MPSVector;

@interface MPSMatrixCopyDescriptor : NSObject {
    id *_sourceMatrices;
    id *_destinationMatrices;
    struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *_cpuOffsetsVector;
    MPSVector *_gpuOffsetsVector;
    unsigned long long _gpuBufferOffset;
    unsigned long long _allocCount;
    unsigned long long _filledCount;
}

+ (id)descriptorWithSourceMatrix:(id)a0 destinationMatrix:(id)a1 offsets:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a2;

- (void)dealloc;
- (id)initWithDevice:(id)a0 count:(unsigned long long)a1;
- (void)setCopyOperationAtIndex:(unsigned long long)a0 sourceMatrix:(id)a1 destinationMatrix:(id)a2 offsets:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a3;
- (id *)sourceMatrices;
- (id *)destinationMatrices;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)cpuOffsetsVector;
- (id)gpuOffsetsVector;
- (unsigned long long)gpuBufferOffset;
- (unsigned long long)allocCount;
- (unsigned long long)filledCount;
- (id)initWithSourceMatrices:(id)a0 destinationMatrices:(id)a1 offsetVector:(id)a2 offset:(unsigned long long)a3;

@end
