@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;

+ (id)getTwitterCredential;
+ (id)getTwitterCredentialWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
