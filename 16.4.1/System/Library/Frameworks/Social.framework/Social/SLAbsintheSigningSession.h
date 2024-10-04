@class NSString;

@interface SLAbsintheSigningSession : NSObject {
    struct NACContextOpaque_ { } *_context;
    NSString *_certURL;
    NSString *_sessionURL;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCertURL:(id)a0 sessionURL:(id)a1;
- (id)signatureForData:(id)a0;
- (id)_urlEncodedString:(id)a0;
- (BOOL)establish;

@end
