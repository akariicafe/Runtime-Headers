@interface _TVTemplateFeatureContextHandle : NSObject

@property (readonly, nonatomic) id context;
@property (nonatomic) long long rank;

+ (id)handleWithContext:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
