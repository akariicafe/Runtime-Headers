@class PGGraphLocationStateNodeCollection;

@interface PGGraphLocationStateNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *collection;

+ (id)filter;
+ (id)addressOfState;
+ (id)countryOfState;
+ (id)momentOfState;

- (unsigned long long)featureType;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (Class)collectionClass;

@end
