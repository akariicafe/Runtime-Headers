@class NSManagedObjectContext, NSMutableSet, NSEntityDescription;

@interface PHObjectDeleteValidator : NSObject {
    NSMutableSet *_deletedObjectIDs;
    NSEntityDescription *_entity;
    NSManagedObjectContext *_context;
}

- (void).cxx_destruct;
- (id)initWithEntityName:(id)a0 managedObjectContext:(id)a1;
- (BOOL)validateForDeleteWithRequestsByObjectID:(id)a0 error:(id *)a1;
- (BOOL)recordObjectID:(id)a0;

@end
