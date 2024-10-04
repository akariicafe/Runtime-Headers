@class NSString, NSData, NSNumber;

@interface ICDeviceInfo : NSObject <ICNanoPairedDeviceStatusObserver> {
    struct atomic_flag { _Atomic BOOL _Value; } _hasRegisteredForNameNotifications;
    struct MGNotificationTokenStruct { } *_nameNotificationToken;
    NSString *_productVersion;
    NSString *_deviceModel;
    NSString *_rawDeviceModel;
    NSString *_hardwarePlatform;
    NSString *_buildVersion;
    int _deviceClass;
    unsigned int _fairPlayDeviceType;
    NSString *_currentLocale;
    NSData *_deviceGUIDData;
    NSString *_deviceGUID;
    NSString *_name;
    NSString *_serialNumber;
    NSData *_macAddressData;
    struct CGSize { double width; double height; } _mainScreenSize;
    NSNumber *_hasCellularDataCapabilityNumber;
    NSNumber *_hasTelephonyCapabilityNumber;
    NSNumber *_hasWiFiCapabilityValue;
    NSNumber *_hasWAPICapabilityValue;
    NSNumber *_has720pCapabilityValue;
    NSNumber *_has1080pCapabilityValue;
    NSNumber *_screenClassValue;
    NSNumber *_isInternalBuildNumber;
    NSNumber *_supportsMusicStreamingValue;
    NSString *_systemReleaseType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) ICDeviceInfo *currentDeviceInfo;
@property (class, readonly) ICDeviceInfo *defaultInfo;

@property (readonly, copy, nonatomic) NSString *deviceModel;
@property (readonly, copy, nonatomic) NSString *rawDeviceModel;
@property (readonly, copy, nonatomic) NSString *hardwarePlatform;
@property (readonly, copy, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSData *deviceFairPlayGUIDData;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *macAddress;
@property (readonly, copy, nonatomic) NSData *macAddressData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mainScreenSize;
@property (readonly, nonatomic) BOOL hasCellularDataCapability;
@property (readonly, nonatomic) BOOL hasTelephonyCapability;
@property (readonly, nonatomic) BOOL hasWiFiCapability;
@property (readonly, nonatomic) BOOL hasWAPICapability;
@property (readonly, nonatomic) BOOL has720pCapability;
@property (readonly, nonatomic) BOOL has1080pCapability;
@property (readonly, nonatomic) int screenClass;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) BOOL isIPhone;
@property (readonly, nonatomic) BOOL isAppleTV;
@property (readonly, nonatomic) BOOL isIPad;
@property (readonly, nonatomic) BOOL isIPod;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) BOOL isAudioAccessory;
@property (readonly, nonatomic) BOOL isMac;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *productPlatform;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, copy, nonatomic) NSString *systemReleaseType;
@property (readonly, nonatomic) unsigned int fairPlayDeviceType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *currentLocale;
@property (readonly, nonatomic) BOOL supportsSideLoadedMediaContent;
@property (readonly, nonatomic) BOOL supportsMusicStreaming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
