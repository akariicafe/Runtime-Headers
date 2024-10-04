@class HMBModelCloudReference, NSUUID, NSData, NSDate, HMBModelInfiniteQuery, NSNumber;

@interface HMDFaceCropModel : HMBModel

@property (class, readonly, copy) NSUUID *sentinelParentUUID;
@property (class, readonly, nonatomic) HMBModelInfiniteQuery *faceCropsForPersonQuery;
@property (class, readonly, nonatomic) HMBModelInfiniteQuery *faceCropsWithUnassociatedFaceCropUUIDQuery;

@property (retain) NSData *faceBoundingBoxData;
@property (retain) NSNumber *sourceField;
@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceBoundingBox;
@property (retain) HMBModelCloudReference *person;
@property (retain) NSUUID *unassociatedFaceCropUUID;
@property long long source;

+ (id)hmbProperties;
+ (id)hmbQueries;

- (id)initWithPersonFaceCrop:(id)a0;
- (id)createPersonFaceCrop;

@end
