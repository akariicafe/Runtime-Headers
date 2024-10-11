@interface PLDuplicateDetectorLivePhotoContextData : NSObject

@property short subtype;
@property BOOL isSharedLibrary;
@property (readonly) unsigned long long hash;

+ (id)dataWithSubtype:(short)a0 isSharedLibrary:(BOOL)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;

@end
