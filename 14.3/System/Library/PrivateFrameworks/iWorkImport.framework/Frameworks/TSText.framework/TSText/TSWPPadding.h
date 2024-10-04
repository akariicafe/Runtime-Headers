@class NSString;

@interface TSWPPadding : NSObject <TSSPropertyValueArchiving, TSSPropertyCommandSerializing, TSDMixing>

@property (nonatomic) double topInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double rightInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)padding;
+ (id)paddingWithTopInset:(double)a0 leftInset:(double)a1 bottomInset:(double)a2 rightInset:(double)a3;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithArchive:(const struct PaddingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; float x6; float x7; } *)a0 unarchiver:(id)a1;
- (id)initWithTopInset:(double)a0 leftInset:(double)a1 bottomInset:(double)a2 rightInset:(double)a3;
- (void)saveToArchive:(struct PaddingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; float x6; float x7; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; } *)a0 archiver:(id)a1;
- (id)paddingByMirroringHorizontal;

@end
