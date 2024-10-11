@class NSString, NSDictionary, NSURL, NSNumber;

@interface WFWordPressPost : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSNumber *postId;
@property (readonly, copy, nonatomic) NSURL *link;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)postIdJSONTransformer;
+ (id)linkJSONTransformer;

- (void).cxx_destruct;

@end
