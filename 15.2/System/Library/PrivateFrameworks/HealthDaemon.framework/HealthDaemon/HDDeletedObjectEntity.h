@interface HDDeletedObjectEntity : HDDataEntity

+ (BOOL)requiresSampleTypePredicate;
+ (BOOL)deleteEntitiesWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)insertDeletedObject:(id)a0 provenanceIdentifier:(id)a1 deletionDate:(id)a2 inDatabase:(id)a3 error:(id *)a4;
+ (BOOL)deleteObjectsWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)deletedObjectEntityForDeletedObject:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)preferredEntityType;
+ (Class)baseDataEntityClass;

@end
