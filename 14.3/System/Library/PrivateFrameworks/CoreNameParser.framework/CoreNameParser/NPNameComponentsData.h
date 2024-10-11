@class NSDictionary;

@interface NPNameComponentsData : NSObject {
    NSDictionary *_nameComponents;
}

- (id)objectValueForEntry:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_keyForDataEntry:(unsigned long long)a0;
- (BOOL)collectionForEntry:(unsigned long long)a0 contains:(id)a1;

@end
