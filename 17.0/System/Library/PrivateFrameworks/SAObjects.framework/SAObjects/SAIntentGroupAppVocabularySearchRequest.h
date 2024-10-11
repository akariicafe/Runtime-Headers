@class NSString;

@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appVocabularyType;
@property (copy, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appVocabularySearchRequestWithDictionary:(id)a0 context:(id)a1;
+ (id)appVocabularySearchRequest;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
