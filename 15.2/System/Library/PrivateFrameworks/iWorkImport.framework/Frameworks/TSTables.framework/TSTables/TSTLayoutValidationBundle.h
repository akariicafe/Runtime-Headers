@class NSMutableArray;

@interface TSTLayoutValidationBundle : NSObject {
    struct unordered_map<unsigned short, double, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> { struct __hash_table<std::__hash_value_type<unsigned short, double>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> { float __value_; } __p3_; } __table_; } _columnToWidth;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *widthHeightCollections;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)cacheWidth:(double)a0 ofColumn:(unsigned short)a1;
- (double)widthOfColumn:(unsigned short)a0 handleCacheMissUsingBlock:(id /* block */)a1;
- (id)generateWidthHeightCollection;

@end
