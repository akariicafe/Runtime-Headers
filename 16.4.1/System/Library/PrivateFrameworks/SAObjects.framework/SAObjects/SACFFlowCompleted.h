@class NSString, SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) SACFProvideContext *updateContext;

+ (id)flowCompleted;
+ (id)flowCompletedWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
