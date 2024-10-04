@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying>

@property (copy) NSSet *statusCodes;

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)a0 statusCodes:(id)a1;

- (void)dealloc;
- (void)getAuthenticationHeadersForTask:(id)a0 task:(id)a1 response:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithStatusCodes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
