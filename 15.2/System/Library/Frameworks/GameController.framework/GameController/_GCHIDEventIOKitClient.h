@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    struct __IOHIDEventSystemClient { } *_ioClient;
}

- (id)initWithClient:(struct __IOHIDEventSystemClient { } *)a0 queue:(id)a1;
- (id)init;
- (void)dealloc;

@end
