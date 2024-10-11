@class NSString, NSNumber, HMDDevice;

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSNumber *confirmed;
@property (retain, nonatomic) HMDDevice *device;

+ (id)properties;

@end
