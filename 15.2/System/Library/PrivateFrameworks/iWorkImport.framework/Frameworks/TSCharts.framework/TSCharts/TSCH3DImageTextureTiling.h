@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling

@property (nonatomic) int mode;
@property (nonatomic) int wrap;
@property (nonatomic) int face;
@property (nonatomic) int xposition;
@property (nonatomic) int yposition;
@property (nonatomic) int scontinuity;
@property (nonatomic) int tcontinuity;
@property (nonatomic) BOOL reveal;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)restoreDefault;
- (void)copyFromBaseImageTextureTiling:(id)a0;

@end
