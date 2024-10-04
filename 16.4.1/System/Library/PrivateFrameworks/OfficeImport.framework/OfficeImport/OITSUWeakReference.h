@interface OITSUWeakReference : NSObject

@property (readonly, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)init;

@end
