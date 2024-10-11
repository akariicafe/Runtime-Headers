@class NSArray, NSString;

@interface TMLReactiveValue : NSObject <TMLBinder, TMLValue> {
    id _targetWeak;
    id _targetUnsafe;
    NSString *_keyPath;
    unsigned long long _valueType;
}

@property (readonly, nonatomic) NSArray *bindings;
@property (readonly, nonatomic) long long bindingOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueForTarget:(id)a0 withKeyPath:(id)a1;
+ (void)removeReactiveValuesForTarget:(id)a0;

- (unsigned long long)valueType;
- (void).cxx_destruct;
- (id)value;
- (void)bindingValueChanged:(id)a0;
- (void)unassign;
- (void)assignToTarget:(id)a0 withKeyPath:(id)a1;
- (id)initWithBindings:(id)a0 valueType:(unsigned long long)a1;

@end
