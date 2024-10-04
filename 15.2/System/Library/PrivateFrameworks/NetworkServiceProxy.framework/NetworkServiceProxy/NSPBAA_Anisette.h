@class NSString;

@interface NSPBAA_Anisette : NSObject <NSPAuthentication>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)description;
+ (void)authenticationFailure;
+ (void)sendRequestForTokens:(id)a0 tokenFetchURLSession:(id)a1 tokenActivationQuery:(id)a2 completionHandler:(id /* block */)a3;


@end
