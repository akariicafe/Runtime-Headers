@interface AMDScalarFeature : AMDFeature

- (id)stringValue;
- (id)initWithValue:(id)a0;
- (void)copyDoubleValues:(int)a0 toBuffer:(double *)a1 withDefaultValue:(double)a2 withMapOp:(id)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
- (void)copyFloat32Values:(int)a0 toBuffer:(float *)a1 withDefaultValue:(float)a2 withMapOp:(id)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
- (void)copyInt32Values:(int)a0 toBuffer:(int *)a1 withDefaultValue:(int)a2 withMapOp:(id)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;

@end
