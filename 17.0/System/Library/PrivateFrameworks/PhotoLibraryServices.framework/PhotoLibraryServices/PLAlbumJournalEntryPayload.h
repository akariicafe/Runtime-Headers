@class NSOrderedSet;

@interface PLAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (readonly, nonatomic) NSOrderedSet *assetUUIDs;

+ (unsigned int)payloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
