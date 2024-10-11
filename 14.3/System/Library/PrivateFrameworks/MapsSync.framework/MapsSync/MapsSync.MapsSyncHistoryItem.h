@interface MapsSync.MapsSyncHistoryItem : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _position;
}

@property (nonatomic, readonly) double position;

+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(BOOL)a4 completion:(id /* block */)a5;
+ (id)fetchHistoryItemForIdentifier:(id)a0;

- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
