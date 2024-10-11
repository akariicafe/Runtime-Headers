@class NSError;

@interface HMIClusteringTaskSummary : HMFObject

@property long long numberOfFaceprintsClustered;
@property long long numberOfClusters;
@property long long numberOfPersonsCreated;
@property long long numberOfUnknownFaceprintsAssociated;
@property double faceprintingDuration;
@property double clusteringDuration;
@property double totalDuration;
@property (retain) NSError *error;

- (id)init;
- (id)attributeDescriptions;
- (void).cxx_destruct;

@end
