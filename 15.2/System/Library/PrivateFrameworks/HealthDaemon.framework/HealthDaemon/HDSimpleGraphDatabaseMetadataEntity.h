@interface HDSimpleGraphDatabaseMetadataEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)setMetadataValue:(id)a0 forKey:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)metadataValueForKey:(id)a0 database:(id)a1 error:(id *)a2;

- (id)init;

@end
