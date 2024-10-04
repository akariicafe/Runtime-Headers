@class TSPDataMetadataMap;

@interface TSPPackageMetadata : TSPObject {
    struct PackageMetadata { void /* function */ **_vptr$MessageLite; struct InternalMetadata { void *ptr_; } _internal_metadata_; struct HasBits<1UL> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } components_; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } datas_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } read_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _read_version_cached_byte_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } write_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _write_version_cached_byte_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } file_format_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _file_format_version_cached_byte_size_; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } versioned_components_; struct DocumentRevision *revision_; struct Reference *data_metadata_map_; unsigned long long last_object_identifier_; unsigned long long save_token_; int preferred_package_type_; } _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}

- (id).cxx_construct;
- (id)initWithContext:(id)a0;
- (void *)message;
- (void).cxx_destruct;
- (id)packageLocator;
- (long long)tsp_identifier;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)dataMetadataForDataIdentifier:(long long)a0;
- (id)packageMetadataDataInfosWithDecryptionKey:(id)a0;
- (void)setDataMetadata:(id)a0 forDataIdentifier:(long long)a1;

@end
