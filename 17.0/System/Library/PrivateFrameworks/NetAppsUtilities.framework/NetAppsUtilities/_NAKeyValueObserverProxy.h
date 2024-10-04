@class NSString;

@interface _NAKeyValueObserverProxy : _NAObserverProxy {
    BOOL _isObserving;
}

@property (readonly, copy, nonatomic) id /* block */ observerBlock;
@property (readonly, weak, nonatomic) id observedObject;
@property (readonly, copy, nonatomic) NSString *keyPath;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithWeakObserver:(id)a0 observedObject:(id)a1 keyPath:(id)a2 options:(unsigned long long)a3 observerBlock:(id /* block */)a4;

@end
