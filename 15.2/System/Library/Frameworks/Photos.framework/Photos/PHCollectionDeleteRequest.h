@interface PHCollectionDeleteRequest : PHTrashableObjectDeleteRequest

- (BOOL)validateForDeleteManagedObject:(id)a0 error:(id *)a1;
- (void)deleteManagedObject:(id)a0 photoLibrary:(id)a1;

@end
