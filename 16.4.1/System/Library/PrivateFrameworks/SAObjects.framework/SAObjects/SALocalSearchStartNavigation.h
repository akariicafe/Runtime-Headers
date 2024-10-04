@class NSString, SALocation;

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *destination;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocation *origin;

+ (id)startNavigation;
+ (id)startNavigationWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
