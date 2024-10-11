@class NSString, MDLAnimatedMatrix4x4;

@interface MDLTransformMatrixOp : NSObject <MDLTransformOp>

@property (nonatomic) BOOL inverse;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) MDLAnimatedMatrix4x4 *animatedValue;

- (void).cxx_destruct;
- (struct { void /* unknown type, empty encoding */ x0[4]; })float4x4AtTime:(double)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })double4x4AtTime:(double)a0;
- (BOOL)IsInverseOp;
- (id)initWithName:(id)a0 inverse:(BOOL)a1 data:(id)a2;

@end
