@class GEOMapItemStorage, NSString, NSUUID, NSNumber;

@interface MapsSync.MapsSyncHistoryPlaceItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _supersededSearchId;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _muid;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSUUID *supersededSearchId;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) NSNumber *muid;

+ (void)fetchNearbyPlacesWithLatitude:(double)a0 longitude:(double)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
