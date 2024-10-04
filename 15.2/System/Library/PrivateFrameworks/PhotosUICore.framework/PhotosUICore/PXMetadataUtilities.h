@interface PXMetadataUtilities : NSObject

+ (id)originalCreationDateForItem:(id)a0;
+ (id)originalTimeZoneForItem:(id)a0;
+ (id)originalLocationForItem:(id)a0;
+ (void)requestExifMetadataProcessingIfNeededForItem:(id)a0 onProcessingQueue:(id)a1 withResultHandler:(id /* block */)a2;
+ (void)processExifMetadataForItem:(id)a0 resultHandler:(id /* block */)a1 callbackQueue:(id)a2;
+ (unsigned long long)flashTypeForItem:(id)a0;
+ (unsigned long long)whiteBalanceTypeForItem:(id)a0;
+ (unsigned long long)meteringModeTypeForItem:(id)a0;
+ (unsigned long long)fileTypeForItem:(id)a0;
+ (unsigned long long)fileTypeForItem:(id)a0 type:(unsigned long long)a1;
+ (id)localizedFileFormatForItem:(id)a0;
+ (id)cameraSettingsForItem:(id)a0;
+ (id)_loadImageWithName:(id)a0;
+ (id)_loadImageWithSystemName:(id)a0;
+ (id)flashImageForType:(unsigned long long)a0;
+ (id)whiteBalanceImageForType:(unsigned long long)a0;
+ (id)meteringModeImageForType:(unsigned long long)a0;
+ (id)_accessibilityDescriptionForFileType:(unsigned long long)a0;
+ (id)_fileTypeImageForType:(unsigned long long)a0;
+ (unsigned long long)codecTypeForItem:(id)a0;
+ (id)fileTypeImageForType:(unsigned long long)a0;
+ (id)megaPixelsDisplayStringForItem:(id)a0;
+ (id)ax_megaPixelsStringForItem:(id)a0;
+ (id)resolutionDisplayStringForItem:(id)a0;
+ (id)hardwareDisplayStringsForItem:(id)a0;
+ (id)_formattedDeviceDescriptionForItem:(id)a0;
+ (id)_formattedLensDescriptionForItem:(id)a0;
+ (id)_focalLengthFromString:(id)a0;
+ (id)_focalLengthStringFromString:(id)a0;
+ (id)_apertureStringFromString:(id)a0;
+ (id)_formattedApertureStringWithString:(id)a0;
+ (id)cameraSettingsDisplayStringsForItem:(id)a0;
+ (id)symbolSystemNamesForItem:(id)a0;
+ (id)semanticStylesDisplayStringForItem:(id)a0;

@end
