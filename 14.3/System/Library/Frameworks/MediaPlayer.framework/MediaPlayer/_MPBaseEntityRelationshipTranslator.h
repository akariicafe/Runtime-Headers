@class NSString;

@interface _MPBaseEntityRelationshipTranslator : NSObject <MPEntityRelationshipTranslator>

@property (readonly, nonatomic) Class relatedMPModelClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRelatedMPModelClass:(Class)a0;
- (void).cxx_destruct;

@end
