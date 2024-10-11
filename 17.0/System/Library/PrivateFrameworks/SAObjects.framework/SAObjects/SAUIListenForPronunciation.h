@class SASPronunciationContext;

@interface SAUIListenForPronunciation : SABaseClientBoundCommand

@property (retain, nonatomic) SASPronunciationContext *context;

+ (id)listenForPronunciation;
+ (id)listenForPronunciationWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
