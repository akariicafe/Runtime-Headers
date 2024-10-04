@interface NTKKaleidoscopeAssetOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long asset;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionWithAsset:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;
- (BOOL)optionExistsInDevice:(id)a0;
- (long long)swatchStyle;

@end
