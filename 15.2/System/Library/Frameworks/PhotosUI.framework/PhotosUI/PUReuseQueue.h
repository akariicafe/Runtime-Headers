@class NSMutableDictionary;

@interface PUReuseQueue : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier;
@property (nonatomic, getter=isReuseEnabled) BOOL reuseEnabled;

- (id)dequeueObjectWithReuseIdentifier:(id)a0 isReused:(BOOL *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)enqueueObjectForReuse:(id)a0 withReuseIdentifier:(id)a1;
- (void)registerObjectCreationBlock:(id /* block */)a0 withReuseIdentifier:(id)a1;

@end
