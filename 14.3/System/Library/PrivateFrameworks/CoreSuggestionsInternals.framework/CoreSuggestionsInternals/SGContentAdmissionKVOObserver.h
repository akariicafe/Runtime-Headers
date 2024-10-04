@class NSString;

@interface SGContentAdmissionKVOObserver : NSObject {
    NSString *_key;
    id /* block */ _handler;
}

+ (id)observeObject:(id)a0 key:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 handler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
