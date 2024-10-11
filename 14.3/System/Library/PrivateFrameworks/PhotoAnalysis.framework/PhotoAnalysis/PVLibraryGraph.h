@class NSString, NSDictionary;

@interface PVLibraryGraph : MAGraph <PVPhotoLibraryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *faceprintDictionary;
@property (retain, nonatomic) NSDictionary *distanceIdentityDictionary;

+ (id)graphForLibrary:(id)a0 ingestPeople:(BOOL)a1;
+ (Class)nodeClassForLabel:(id)a0 domain:(unsigned short)a1;
+ (Class)edgeClassForLabel:(id)a0 domain:(unsigned short)a1;
+ (id)originGraphForFacesDataSnapshotAtPath:(id)a0;
+ (id)graphForFacesDataSnapshotAtPath:(id)a0;
+ (id)graphWithName:(id)a0 forFacesDataSnapshotAtPath:(id)a1;
+ (id)defaultFacesDataSnapshotPath;

- (float)pv_faceProcessingProgress;
- (id)init;
- (void).cxx_destruct;
- (id)_infoNode;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)a0 inMoment:(id)a1;
- (id)pv_fetchPersonsWithType:(unsigned long long)a0;
- (BOOL)pv_performChangesAndWait:(id /* block */)a0 error:(id *)a1;
- (id)pv_persistentStorageDirectoryURL;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchPersonsInMoment:(id)a0;
- (id)pv_fetchCandidatePersonsForPerson:(id)a0;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)a0;
- (id)pv_fetchMoments;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)a0;
- (id)pv_fetchFacesForPerson:(id)a0;
- (id)pv_fetchFacesForPerson:(id)a0 inMoment:(id)a1;
- (id)pv_fetchFacesForFaceGroup:(id)a0;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchMomentsForPerson:(id)a0;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchAssetsInMoment:(id)a0;
- (id)pv_fetchAssetsForPerson:(id)a0;
- (id)pv_fetchAssetsForFaceGroup:(id)a0;
- (id)pv_fetchFaceGroups;
- (id)pv_lastAssetDate;
- (id)pv_fetchFaceGroupsForPerson:(id)a0;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (BOOL)saveFacesDataSnapshotAtPath:(id)a0 error:(id *)a1;
- (unsigned long long)getPeopleTypeForFaceGroupNode:(id)a0;
- (id)_insertMomentNodeForMoment:(id)a0;
- (id)_insertAssetNodeForAsset:(id)a0;
- (id)_insertFaceNodeForFace:(id)a0;
- (id)_insertPeopleNodeForPerson:(id)a0 withType:(unsigned long long)a1;
- (id)_insertFaceGroupNodeForFaceGroup:(id)a0;
- (BOOL)_saveDictionary:(id)a0 toURL:(id)a1 error:(id *)a2;

@end
