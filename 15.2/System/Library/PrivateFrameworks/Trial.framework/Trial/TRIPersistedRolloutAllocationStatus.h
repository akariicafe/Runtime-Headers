@class NSString, NSMutableArray;

@interface TRIPersistedRolloutAllocationStatus : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (retain, nonatomic) NSMutableArray *namespaceFactorPackArray;
@property (readonly, nonatomic) unsigned long long namespaceFactorPackArray_Count;

+ (id)descriptor;

@end
