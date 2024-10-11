@class _MKOverlayTileRequester, NSObject;
@protocol OS_dispatch_queue;

@interface MKTileOverlayRequesterOp : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) struct _GEOTileKey { unsigned char provider : 7; unsigned char expires : 1; union { struct _GEOStandardTileKey { unsigned long reserved : 40; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; } standard; struct _GEOGloriaQuadIDTileKey { unsigned char z : 6; unsigned long quadKey : 64; unsigned short type : 14; unsigned char padding : 4; union { struct { unsigned short mcc : 10; unsigned short mnc : 10; unsigned short padding : 12; } cellularInfo; unsigned int unused; } typeSpecificInfo; } gloriaQuad; struct _GEORegionalResourceKey { unsigned int index : 32; unsigned char scenarios : 8; unsigned char type : 6; unsigned char pixelSize : 8; unsigned char textScale : 8; unsigned char forceRefetch : 1; unsigned long padding : 57; } regional; struct _GEOSputnikMetadataKey { unsigned int part : 32; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned long padding : 42; } sputnikMetadata; struct _GEOFlyoverKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char h : 8; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned char textScale : 8; } flyover; struct _GEOTransitLineSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long muid : 64; } transitLineSelection; struct _GEOPolygonSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long polyId : 64; } polygonSelection; struct _GEOTileOverlayKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char contentScale : 8; unsigned int providerId : 32; unsigned short keyframeIndex : 16; unsigned char padding : 6; } tileOverlay; struct _GEOIdentifiedResourceKey { unsigned long long identifier; unsigned char levelOfDetail; unsigned char type; unsigned char supportsASTC : 1; unsigned long padding : 39; } identifiedResource; struct _GEOMuninMeshKey { unsigned long pointId : 64; unsigned int buildId : 32; unsigned short bucketId : 16; unsigned char cameraId : 5; unsigned char lod : 3; } muninMesh; struct _GEOVisualLocalizationTrackKey { unsigned short formatVersion; unsigned char uncertainty; unsigned short reserved : 16; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned int padding : 22; } visualLocalization; struct _GEOVisualLocalizationMetadataKey { unsigned char maxSupportedOutputVersion : 6; unsigned short maxSupportedFormatVersion : 9; unsigned int reserved : 25; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned int padding : 22; } visualLocalizationMetadata; struct _GEOVisualLocalizationDataKey { unsigned long long buildID; unsigned char uncertainty; unsigned char z : 5; unsigned int x : 21; unsigned int y : 21; unsigned char padding : 1; } visualLocalizationData; struct _GEOS2TileKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char f : 3; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; unsigned long padding : 37; } s2Tile; } ; } key;
@property (weak, nonatomic) _MKOverlayTileRequester *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id data;

- (void)_start;
- (void)_cancel;
- (void)cancel;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
