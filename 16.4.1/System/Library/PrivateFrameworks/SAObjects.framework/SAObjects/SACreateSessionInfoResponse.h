@class NSData, NSNumber;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *sessionInfo;
@property (copy, nonatomic) NSNumber *validityDuration;

+ (id)createSessionInfoResponse;
+ (id)createSessionInfoResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
