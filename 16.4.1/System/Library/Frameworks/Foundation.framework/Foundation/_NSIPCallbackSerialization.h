@class NSUUID;

@interface _NSIPCallbackSerialization : NSObject {
    id /* block */ _endBlock;
    _Atomic BOOL _hasBegun;
    _Atomic BOOL _hasEnded;
    NSUUID *_UUID;
}

- (void)dealloc;
- (id)init;

@end
