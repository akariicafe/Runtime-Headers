@class NSString;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) float volume;

- (id)initWithVolume:(float)a0;
- (id)initWithVolume:(float)a0 outputDeviceUID:(id)a1;
- (unsigned long long)type;

@end
