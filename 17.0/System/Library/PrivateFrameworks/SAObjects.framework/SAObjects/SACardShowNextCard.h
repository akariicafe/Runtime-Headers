@class SACardSnippet;

@interface SACardShowNextCard : SABaseClientBoundCommand

@property (retain, nonatomic) SACardSnippet *cardSnippet;

+ (id)showNextCard;
+ (id)showNextCardWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
