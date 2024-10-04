@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredAccuracy;
@property (copy, nonatomic) NSNumber *maxAge;
@property (copy, nonatomic) NSNumber *searchTimeout;

+ (id)getRequestOrigin;
+ (id)getRequestOriginWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
