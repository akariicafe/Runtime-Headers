@class NSString, NSArray;

@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *devices;

+ (id)devicePlaySound;
+ (id)devicePlaySoundWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
