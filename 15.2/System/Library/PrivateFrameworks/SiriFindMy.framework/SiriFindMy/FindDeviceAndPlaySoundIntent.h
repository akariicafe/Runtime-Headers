@class NSArray, DeviceQuery;

@interface FindDeviceAndPlaySoundIntent : INIntent

@property (nonatomic, retain) DeviceQuery *deviceQuery;
@property (nonatomic, copy) NSArray *devices;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
