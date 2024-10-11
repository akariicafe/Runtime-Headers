@class NSData;

@interface BRCChecksummingOutputStream : NSOutputStream {
    struct CC_SHA1state_st { unsigned int h0; unsigned int h1; unsigned int h2; unsigned int h3; unsigned int h4; unsigned int Nl; unsigned int Nh; unsigned int data[16]; int num; } _ctx;
    unsigned char _sig[21];
    BOOL _isOpen;
}

@property (readonly, nonatomic) NSData *signature;

+ (id)checksummingOutputStreamWithTag:(unsigned char)a0;

- (void)close;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithTag:(unsigned char)a0;
- (void)open;
- (BOOL)hasSpaceAvailable;
- (unsigned long long)streamStatus;

@end
