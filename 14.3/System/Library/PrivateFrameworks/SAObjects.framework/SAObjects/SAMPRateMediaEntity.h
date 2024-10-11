@class NSString;

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *hashedRouteUID;
@property (nonatomic) long long rating;

+ (id)rateMediaEntity;
+ (id)rateMediaEntityWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
