@class NSArray, NSString;

@interface SAUILParseExpressionsCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *parsedExpressions;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseExpressionsCompleted;
+ (id)parseExpressionsCompletedWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
