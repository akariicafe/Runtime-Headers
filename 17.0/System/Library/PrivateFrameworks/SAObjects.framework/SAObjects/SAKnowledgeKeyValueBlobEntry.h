@class NSData;

@interface SAKnowledgeKeyValueBlobEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSData *value;

+ (id)keyValueBlobEntry;
+ (id)keyValueBlobEntryWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
