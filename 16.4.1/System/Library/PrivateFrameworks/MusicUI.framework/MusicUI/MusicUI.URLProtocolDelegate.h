@interface MusicUI.URLProtocolDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ tabViewController;
}

- (id)init;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;

@end
