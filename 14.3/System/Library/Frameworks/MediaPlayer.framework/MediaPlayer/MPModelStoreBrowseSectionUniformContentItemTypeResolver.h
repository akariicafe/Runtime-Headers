@interface MPModelStoreBrowseSectionUniformContentItemTypeResolver : NSObject {
    BOOL _hasValidUniformContentItemType;
    struct map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long> > > { struct __tree<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _contentItemTypeOccurrences;
    unsigned long long _totalNumberOfOccurrences;
    long long _uniformContentItemType;
}

- (void).cxx_destruct;
- (void)addContentItemType:(long long)a0;
- (long long)uniformContentItemType;
- (id).cxx_construct;

@end
