@class NSString, NSData;

@interface MapsSync.MapsSyncCollectionTransitItem : MapsSync.MapsSyncCollectionItem {
    void /* unknown type, empty encoding */ _transitLineStorage;
    void /* unknown type, empty encoding */ _muid;
}

@property (nonatomic, readonly) BOOL requiresCollection;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *transitLineStorageData;
@property (nonatomic, readonly) unsigned long long muid;

+ (id)fetchCollectionTransitItemForIdentifier:(id)a0;

- (BOOL)isDuplicateOfOther:(id)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (id)initWithCollection:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
