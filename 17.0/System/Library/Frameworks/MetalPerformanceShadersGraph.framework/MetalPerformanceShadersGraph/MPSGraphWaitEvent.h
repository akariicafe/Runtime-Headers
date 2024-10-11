@protocol MTLSharedEvent;

@interface MPSGraphWaitEvent : MPSGraphObject {
    id<MTLSharedEvent> _event;
    unsigned long long _value;
}

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 value:(unsigned long long)a1;

@end
