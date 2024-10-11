@interface VSSAMLRequestFactory : NSObject

+ (id)authNRequestWithResponse:(id)a0 forced:(BOOL)a1 error:(id *)a2;
+ (id)attributeQueryWithAttributeNames:(id)a0 channelID:(id)a1 authNResponse:(id)a2 error:(id *)a3;
+ (id)logoutRequestWithError:(id *)a0;

@end
