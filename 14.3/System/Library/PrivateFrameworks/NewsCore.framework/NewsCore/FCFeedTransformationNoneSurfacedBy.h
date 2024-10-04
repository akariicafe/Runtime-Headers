@class NSSet, NSDictionary, NSString;

@interface FCFeedTransformationNoneSurfacedBy : NSObject <FCFeedTransforming>

@property (copy, nonatomic) NSSet *tagIDs;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithTagIDs:(id)a0 feedContextByFeedID:(id)a1;

- (void).cxx_destruct;
- (id)transformFeedItems:(id)a0;

@end
