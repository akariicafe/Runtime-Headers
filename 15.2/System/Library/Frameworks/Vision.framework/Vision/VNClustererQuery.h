@protocol VNClustererModelQuerying;

@interface VNClustererQuery : NSObject <VNClustererModelQuerying> {
    id<VNClustererModelQuerying> _context;
}

+ (id)clustererModelFileNamesFromState:(id)a0 storedInPath:(id)a1 error:(id *)a2;
+ (id)nonGroupedGroupID;
+ (id)representativenessForFaces:(id)a0 error:(id *)a1;
+ (id)distanceBetweenFacesWithFaceprint:(id)a0 andFaceprint:(id)a1 error:(id *)a2;
+ (id)distanceBetweenFacesWithFaceObservation:(id)a0 andFaceObservation:(id)a1 error:(id *)a2;
+ (id)clustererQueryWithOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)getDistances:(id)a0 to:(id)a1 error:(id *)a2;
- (id)maximumFaceIdInModelAndReturnError:(id *)a0;
- (id)allClusteredFaceIdsAndReturnError:(id *)a0;
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)a0 error:(id *)a1;
- (id)getAllClustersAndReturnError:(id *)a0;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)a0 error:(id *)a1;
- (id)distanceBetweenClustersWithFaceId:(id)a0 andFaceId:(id)a1 error:(id *)a2;
- (id)distanceBetweenLevel1Clusters:(id)a0 error:(id *)a1;
- (id)suggestionsForClustersWithFaceIds:(id)a0 affinityThreshold:(float)a1 canceller:(id)a2 error:(id *)a3;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 requestRevision:(unsigned long long)a4 error:(id *)a5;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 torsoThreshold:(float)a4 requestRevision:(unsigned long long)a5 torsoprintRequestRevision:(unsigned long long)a6 error:(id *)a7;

@end
