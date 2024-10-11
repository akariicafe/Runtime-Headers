@class NSRelationshipDescription, CKRecordID;

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    CKRecordID *_relatedRecordID;
    CKRecordID *_recordID;
}

- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;
- (id)initWithManagedObject:(id)a0 withRecordName:(id)a1 relatedToRecordWithRecordName:(id)a2 byRelationship:(id)a3;
- (void)dealloc;

@end
