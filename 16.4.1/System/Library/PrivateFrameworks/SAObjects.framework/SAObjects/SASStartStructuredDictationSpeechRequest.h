@class NSString;

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSString *structuredDictationType;

+ (id)startStructuredDictationSpeechRequest;
+ (id)startStructuredDictationSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
