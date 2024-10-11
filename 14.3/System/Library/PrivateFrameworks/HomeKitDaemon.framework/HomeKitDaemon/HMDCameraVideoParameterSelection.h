@class HMDVideoCodec, HMDSupportedVideoStreamConfiguration, HMDSupportedRTPConfiguration, NSArray, HMDCameraVideoTierParameters, HMDH264Profile, HMDStreamingCapabilities, HMDH264Level, HMDCameraVideoTier, HMDPacketizationMode, NSNumber, HMDSelectedVideoParameters;

@interface HMDCameraVideoParameterSelection : HMDCameraParameterSelectionBase

@property (readonly, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration;
@property (readonly, nonatomic) NSNumber *syncSource;
@property (retain, nonatomic) HMDSelectedVideoParameters *selectedVideoParameters;
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities;
@property (readonly, nonatomic) NSArray *videoCodecsPreference;
@property (readonly, nonatomic) NSArray *h264ProfilesPreference;
@property (readonly, nonatomic) NSArray *h264LevelsPreference;
@property (readonly, nonatomic) NSArray *h264PacketizationPreference;
@property (readonly, nonatomic) NSArray *videoResolutionsPreference;
@property (readonly, nonatomic) NSArray *validVideoParameterCombinations;
@property (readonly, nonatomic) HMDCameraVideoTierParameters *videoTierParameters;
@property (retain, nonatomic) HMDH264Profile *selectedProfile;
@property (retain, nonatomic) HMDH264Level *selectedLevel;
@property (retain, nonatomic) HMDPacketizationMode *selectedPacketizationMode;
@property (retain, nonatomic) NSNumber *selectedFramerate;
@property (retain, nonatomic) HMDCameraVideoTier *selectedVideoTier;
@property (retain, nonatomic) HMDVideoCodec *selectedCodecType;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)createSRTPParamters;
- (void)_generateAllCombinations;
- (void)_setVideoResolutionPreference;
- (BOOL)_selectParametersFromCodec:(id)a0 profiles:(id)a1 levels:(id)a2 packetizationModes:(id)a3 videoAttributes:(id)a4;
- (id)initWithSessionID:(id)a0 videoTierParameters:(id)a1 supportedVideoConfiguration:(id)a2 supportedRTPConfiguration:(id)a3 streamingCapabilities:(id)a4;
- (BOOL)selectVideoParameters;
- (id)createSelectedVideoParameters;
- (id)createReselectedVideoParameters:(id)a0;

@end
