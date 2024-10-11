@class NSPointerArray;

@interface REFeatureValueCounter : NSObject {
    NSPointerArray *_values;
    struct REFancyShrinkingDictionary { struct unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float __value_; } __p3_; } __table_; } m_mapDocumentFrequency; unsigned long long m_maxSize; unsigned long long m_shrinkSize; int m_nVersion; BOOL m_trimTop; BOOL m_shinksOnTotalCount; } _indicies;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (nonatomic) unsigned long long count;

- (unsigned long long)countForValue:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)totalCount;
- (id).cxx_construct;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void)_updateConfigurationForCount:(unsigned long long)a0;
- (unsigned long long)trackedValueForValue:(id)a0;
- (id)_createErrorWithCode:(unsigned long long)a0 description:(id)a1 underlyingError:(id)a2;

@end
