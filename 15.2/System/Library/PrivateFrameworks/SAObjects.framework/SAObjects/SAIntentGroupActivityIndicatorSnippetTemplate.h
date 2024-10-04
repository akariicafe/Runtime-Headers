@class NSString;

@interface SAIntentGroupActivityIndicatorSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *detailText;

+ (id)activityIndicatorSnippetTemplate;
+ (id)activityIndicatorSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
