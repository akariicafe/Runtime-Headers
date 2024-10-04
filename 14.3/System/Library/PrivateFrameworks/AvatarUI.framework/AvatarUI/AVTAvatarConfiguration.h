@class NSString, NSMutableDictionary;

@interface AVTAvatarConfiguration : NSObject <AVTCacheableResource, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *presetsStorage;
@property (readonly, nonatomic) NSMutableDictionary *colorPresetsStorage;

+ (id)configurationPresetWithPreset:(id)a0 settingKind:(struct { long long x0; long long x1; })a1;
+ (id)configurationColorPresetWithColorPreset:(id)a0 settingKind:(struct { long long x0; long long x1; })a1 coreModel:(id)a2;
+ (id)keyForSettingKind:(struct { long long x0; long long x1; })a0;
+ (id)configurationFromAvatar:(id)a0;
+ (id)configurationFromAvatar:(id)a0 coreModel:(id)a1;

- (id)presetForCategory:(long long)a0;
- (void)addConfigurationPreset:(id)a0;
- (void)addConfigurationColorPreset:(id)a0;
- (id)initWithPresets:(id)a0 colorPresets:(id)a1;
- (void)removePresetsForSettingKind:(struct { long long x0; long long x1; })a0 storage:(id)a1;
- (id)presetsForStorage:(id)a0;
- (id)presetForSettingKind:(struct { long long x0; long long x1; })a0 storage:(id)a1;
- (id)presetConfigurationPresets;
- (id)colorConfigurationPresets;
- (void)addColorPreset:(id)a0;
- (void)removePresetsForCategory:(long long)a0;
- (void)removeColorPresetsForSettingKind:(struct { long long x0; long long x1; })a0;
- (id)configurationPresets;
- (id)configurationPresetForSettingKind:(struct { long long x0; long long x1; })a0;
- (void)addPreset:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)volatileIdentifierForScope:(id)a0;
- (unsigned long long)costForScope:(id)a0;
- (id)presets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)colorPresets;
- (id)persistentIdentifierForScope:(id)a0;
- (BOOL)requiresEncryption;
- (BOOL)isEqual:(id)a0;
- (void)applyToAvatar:(id)a0;
- (id)colorPresetForSettingKind:(struct { long long x0; long long x1; })a0;

@end
