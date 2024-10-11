@class NSString;

@interface SASettingSetAirPlayRoute : SASettingCommand

@property (copy, nonatomic) NSString *hashedRouteId;
@property (copy, nonatomic) NSString *routeType;

+ (id)setAirPlayRoute;
+ (id)setAirPlayRouteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
