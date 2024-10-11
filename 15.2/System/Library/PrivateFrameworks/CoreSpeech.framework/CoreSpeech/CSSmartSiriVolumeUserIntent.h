@interface CSSmartSiriVolumeUserIntent : NSObject {
    unsigned long long kSSVCAUserIntentValidForSeconds;
    float kSSVCAUserIntentVolumeIncreaseFactor;
    float kSSVCAUserIntentVolumeDecreaseFactor;
    float kSSVCAUserIntentPermanentOffsetFactorDelta;
    float kSSVCAUserIntentPermanentOffsetFactorLowerBound;
    float kSSVCAUserIntentPermanentOffsetFactorUpperBound;
    float kSSVCA_DEVICE_SIMPLE_MIN_TTS_VOLUME;
    float kSSVCA_DEVICE_SIMPLE_MAX_TTS_VOLUME;
    float kSSVCA_DEVICE_DEFAULT_MIN_TTS_VOLUME;
    float kSSVCA_DEVICE_DEFAULT_MAX_TTS_VOLUME;
}

@property (nonatomic) unsigned long long userIntentType;
@property (nonatomic) unsigned long long userIntentTime;
@property (nonatomic) unsigned long long userIntentValidForSeconds;
@property (nonatomic) unsigned long long latestVolumeTime;
@property (nonatomic) float userIntentVolume;
@property (nonatomic) float latestVolume;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) BOOL permanentOffsetIsEnabled;

- (double)applyLowerAndUpperBoundsToVolume:(float)a0;
- (void)initWithStoredInformationAndAsset:(id)a0;
- (float)increaseSiriVolumeBasedOnUserIntent;
- (float)decreaseSiriVolumeBasedOnUserIntent;
- (void)storeASVStateInformation;
- (double)applyLowerAndUpperBoundsToVolumeOffset:(float)a0;

@end
