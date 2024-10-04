@class NSString;

@interface TKTokenAccessUserPromptNoop : NSObject <TKTokenAccessUserPrompt>

@property (nonatomic) long long preflightStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)promptUserToEvaluateRequest:(id)a0 error:(id *)a1;
- (id)initWithPreflightStatus:(long long)a0;

@end
