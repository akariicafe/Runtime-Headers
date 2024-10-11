@interface VNPersonSegmentationGeneratorInstanceBased4People : VNSegmentationGenerator {
    struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> { struct __hash_table<std::__hash_value_type<NSString *, espresso_buffer_t>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, espresso_buffer_t>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::hash<NSString *>, std::equal_to<NSString *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::equal_to<NSString *>, std::hash<NSString *>>> { float __value_; } __p3_; } __table_; } _espressoConfidencesOutputBuffer;
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (BOOL)inputMaskRequired;
+ (id)outputConfidenceBlobNames;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;
+ (BOOL)rotateImageToMatchNetworkOrientation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)bindOutputConfidenceBuffersAndReturnError:(id *)a0;
- (void)initializeOutputConfidenceBuffers:(void *)a0;
- (BOOL)validateMaskForBlobName:(id)a0 options:(id)a1 maskConfidence:(float *)a2 maskAcceptable:(BOOL *)a3 error:(id *)a4;

@end
