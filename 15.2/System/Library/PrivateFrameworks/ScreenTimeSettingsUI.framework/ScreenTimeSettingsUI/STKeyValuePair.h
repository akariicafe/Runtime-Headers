@interface STKeyValuePair : NSObject

@property (readonly, nonatomic) id key;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
