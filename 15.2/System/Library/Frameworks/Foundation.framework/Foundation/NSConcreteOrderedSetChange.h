@interface NSConcreteOrderedSetChange : NSOrderedSetChange {
    unsigned long long _changeType;
    unsigned long long _sourceIndex;
    unsigned long long _destinationIndex;
    id _value;
}

- (id)initWithType:(unsigned long long)a0 sourceIndex:(unsigned long long)a1 destinationIndex:(unsigned long long)a2 value:(id)a3;
- (unsigned long long)sourceIndex;
- (id)value;
- (unsigned long long)destinationIndex;
- (unsigned long long)changeType;
- (void)dealloc;

@end
