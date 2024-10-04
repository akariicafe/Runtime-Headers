@interface SGEKEventStoreProvider : NSObject {
    id /* block */ _newEKEventStoreGetter;
    id /* block */ _callBlockWithEKEventStoreForReading;
}

+ (id)defaultEKStoreProvider;

- (void).cxx_destruct;
- (id)initWithNewEKEventStoreGetter:(id /* block */)a0 callBlockWithEKEventStoreForReading:(id /* block */)a1;

@end
