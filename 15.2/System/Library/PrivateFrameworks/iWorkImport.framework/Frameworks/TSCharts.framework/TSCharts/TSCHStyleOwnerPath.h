@class NSArray;

@interface TSCHStyleOwnerPath : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *uuids;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)verifiedUUIDs:(id)a0;
+ (id)styleOwnerPathWithUUIDs:(id)a0;
+ (id)styleOwnerPathForStyleOwner:(id)a0;
+ (unsigned char)styleOwnerPathTypeForStyleOwner:(id)a0;
+ (id)styleOwnerPathForSemanticTag:(id)a0 ofChart:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUUIDs:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)TSUUUIDPath;
- (id)pathByPrefixingWithUUIDs:(id)a0;
- (Class)genericPropertyMapClass;
- (unsigned char)styleOwnerPathType;
- (int)styleOwnerType;
- (id)p_createUUIDDecoder;
- (id)p_axisStyleOwnerForChart:(id)a0;
- (id)p_seriesStyleOwnerForChart:(id)a0;
- (id)p_referenceLineStyleOwnerForChart:(id)a0;
- (id)styleOwnerForChart:(id)a0;

@end
