@class NSString;

@interface _SGNSStringEncodingEnumerator : NSEnumerator <NSFastEnumeration> {
    NSString *_string;
    unsigned long long _encoding;
    struct _NSRange { unsigned long long location; unsigned long long length; } _remaining;
    BOOL _needsBOM;
    BOOL _needsNullTermination;
}

- (id)nextObject;
- (id)initWithString:(id)a0 encoding:(unsigned long long)a1 nullTerminated:(BOOL)a2;
- (id)nullTerminationIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
