@class TDTextureAsset, TDTextureMipLevel, TDThemeCompressionType, TDTextureRenditionSpec;

@interface TDTextureImageRenditionSpec : TDRenditionSpec

@property (nonatomic) BOOL flipped;
@property (retain, nonatomic) TDTextureAsset *asset;
@property (retain, nonatomic) TDTextureMipLevel *textureLevelAssignment;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (readonly, nonatomic) TDTextureRenditionSpec *texture;
@property (readonly, nonatomic) long long textureFormat;

- (BOOL)isCubeMap;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (BOOL)updatePackingPropertiesWithDocument:(id)a0;
- (BOOL)canBePackedWithDocument:(id)a0;
- (id)associatedFileModificationDateWithDocument:(id)a0;
- (int)_pixelFormatOfCGImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)_createImageRefWithURL:(id)a0 andDocument:(id)a1 format:(unsigned int *)a2;
- (id)textureFacesWithDocument:(id)a0;

@end
