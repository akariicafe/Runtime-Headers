@class TSPObject;

@interface TSPObjectReferenceWrapper : NSObject

@property (readonly, nonatomic) TSPObject *object;

+ (BOOL)allowUnarchivingObjectClass:(Class)a0;

- (id)initWithReferencedObject:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
