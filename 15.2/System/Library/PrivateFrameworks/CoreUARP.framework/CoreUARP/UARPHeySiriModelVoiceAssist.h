@class NSString, NSURL, UARPSuperBinaryAssetPayload, NSObject, UARPSuperBinaryAsset;
@protocol OS_os_log;

@interface UARPHeySiriModelVoiceAssist : UARPHeySiriModelBase <UARPHeySiriModelDelegateProtocol> {
    NSObject<OS_os_log> *_log;
    NSURL *_superBinaryMetaDataURL;
    NSURL *_modelMetaDataURL;
    NSURL *_modelDataURL;
    NSURL *_fallbackModelMetaDataURL;
    NSURL *_fallbackModelDataURL;
    UARPSuperBinaryAsset *_asset;
    UARPSuperBinaryAssetPayload *_payloadModel;
    UARPSuperBinaryAssetPayload *_payloadFallbackModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tag;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccessory:(id)a0 controller:(id)a1 url:(id)a2;
- (BOOL)processDynamicAsset:(id *)a0;
- (void)currentHeySiriModel:(id)a0 fallbackModel:(id)a1 error:(id)a2;
- (id)buildURLForTemporaryFile;
- (id)generateAsset:(id *)a0;

@end
