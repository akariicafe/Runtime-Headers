@interface SISceneSegmentation : NSObject {
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    struct networkparams_t { struct inputparams_t { struct { float bias_r; float bias_g; float bias_b; float scale; BOOL network_wants_bgr; } preprocessor; struct CGSize { double width; double height; } resolution; } input; struct outputparams_t { struct CGSize { double width; double height; } resolution; } output; struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } temp; } _parameters;
    struct networkvariables_t { struct inputvariables_t { struct CGColorSpace *colorSpace; struct vImage_CGImageFormat { unsigned int bitsPerComponent; unsigned int bitsPerPixel; struct CGColorSpace *colorSpace; unsigned int bitmapInfo; unsigned int version; double *decode; int renderingIntent; } cgFormat; struct vImageCVImageFormat *cvFormat; struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } image; } input; struct outputvariables_t { struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } labelImage; struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } labelTensor; struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } probabilitiesTensor; struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } normalsTensor; struct __CVPixelBufferPool *pool_label; } output; } _variables;
}

- (id)init;
- (BOOL)initMLNetwork;
- (void)initMLVariables;
- (struct __CVBuffer { } *)copyResultLabelsToPixelBuffer;
- (struct CGSize { double x0; double x1; })inputResolution;
- (struct CGSize { double x0; double x1; })outputResolution;
- (struct __CVBuffer { } *)evaluateSemanticsForImage:(struct __CVBuffer { } *)a0;

@end
