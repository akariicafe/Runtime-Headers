@interface NTKMonogramComplication : NTKComplication

- (id)ntk_sectionIdentifier;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;

@end
