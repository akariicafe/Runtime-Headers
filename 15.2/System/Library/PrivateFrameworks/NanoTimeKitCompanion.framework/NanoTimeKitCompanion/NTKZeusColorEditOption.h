@class NSString;

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, nonatomic) unsigned long long color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domain;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)colorNameForColorValue:(unsigned long long)a0;
+ (unsigned long long)colorCodeForColorName:(id)a0;

- (id)localizedName;
- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;
- (BOOL)optionExistsInDevice:(id)a0;
- (long long)swatchStyle;

@end
