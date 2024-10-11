@class SAGuidanceGuideSnippet, NSString, SAGuidanceSuggestedUtterances, NSNumber;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (retain, nonatomic) SAGuidanceGuideSnippet *guideSnippet;
@property (copy, nonatomic) NSNumber *guideTag;
@property (copy, nonatomic) NSString *languageCode;
@property (retain, nonatomic) SAGuidanceSuggestedUtterances *suggestedUtterances;

+ (id)guideUpdate;
+ (id)guideUpdateWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
