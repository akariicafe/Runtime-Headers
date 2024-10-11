@class NSMapTable;

@interface GEOSpatialPlaceLookupResult : NSObject {
    NSMapTable *_parametersToMapItemsMap;
    NSMapTable *_parametersToResultItemMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)mapItemsForSpatialLookupParameters:(id)a0;
- (id)resultItemForSpatialLookupParameters:(id)a0;
- (id)initWithMapItemMap:(id)a0 resultItemMap:(id)a1;

@end
