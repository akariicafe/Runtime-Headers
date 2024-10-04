@class NSString, SALocation;

@interface SALocalSearchVehicleEventCreate : SADomainCommand

@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *notes;

+ (id)vehicleEventCreate;
+ (id)vehicleEventCreateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
