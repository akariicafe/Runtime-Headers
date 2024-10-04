@class TSSStylesheet, NSString, NSArray, NSMutableDictionary;

@interface TSSTheme : TSPObject <TSKModel, TSKDocumentObject> {
    NSString *mThemeIdentifier;
    NSMutableDictionary *mPresetsByKind;
    TSSStylesheet *mLegacyStylesheet;
    TSSStylesheet *mDocumentStylesheet;
    NSMutableDictionary *mReplacedPresetUUIDs;
}

@property (retain, nonatomic) TSSStylesheet *legacyStylesheet;
@property (retain, nonatomic) TSSStylesheet *documentStylesheet;
@property (retain, nonatomic) NSString *themeIdentifier;
@property (readonly, nonatomic) NSArray *presetKinds;
@property (readonly, nonatomic) NSArray *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPresetSourceClass:(Class)a0;
+ (id)presetSources;
+ (id)presetBootstrapOrder;
+ (void)registerPresetSourceClasses;
+ (BOOL)needsObjectUUID;
+ (id)themeWithContext:(id)a0 alternate:(unsigned long long)a1 withStylesheet:(id)a2;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)childEnumerator;
- (id)modelPathComponentForChild:(id)a0;
- (id)referencedStyles;
- (void)bootstrapThemeAlternate:(unsigned long long)a0;
- (void)disablePresetValidation;
- (void)insertPreset:(id)a0 ofKind:(id)a1 atIndex:(unsigned long long)a2;
- (id)presetsOfKind:(id)a0;
- (id)presetOfKind:(id)a0 index:(unsigned long long)a1;
- (void)setPresets:(id)a0 ofKind:(id)a1;
- (unsigned long long)indexOfPreset:(id)a0;
- (id)p_identifierForBootstrapTheme:(unsigned long long)a0;
- (BOOL)hasPresetsOfKind:(id)a0;
- (void)enablePresetValidation;
- (void)addPreset:(id)a0 ofKind:(id)a1;
- (void)removePreset:(id)a0;
- (void)movePresetOfKind:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (void)checkThemeStylesheetConsistency;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)a0;
- (id)initWithContext:(id)a0 documentStylesheet:(id)a1;
- (void)upgradeStylesWithBlock:(id /* block */)a0;
- (BOOL)p_shouldDoDOLCForPreset:(id)a0;
- (id)migratedPresetUUIDForPresetUUID:(id)a0;
- (id)p_migratedPresetForPreset:(id)a0 followReplacements:(BOOL)a1;
- (void)recordReplacementOfPresetUUID:(id)a0 withPresetUUID:(id)a1;
- (void)clearReplacementsOfPresetUUID:(id)a0;
- (void)clearAllReplacementsOfPresetUUIDs;
- (id)migratedPresetForPreset:(id)a0;
- (id)migratedPresetForPresetWithoutFollowingReplacements:(id)a0;

@end
