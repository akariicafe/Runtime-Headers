@class NSArray, NSString;

@interface SARemotePlaybackDeviceList : SADomainObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *remotePlaybackDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remotePlaybackDeviceList;
+ (id)remotePlaybackDeviceListWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
