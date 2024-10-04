@class NSString;

@interface OZFxPlug3DAPI : NSObject <Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _is3D;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)is3D;
- (BOOL)isUsingCamera;
- (id)cameraMatrixAtTime:(double)a0;
- (id)layerMatrixAtTime:(double)a0;
- (double)focalLengthAtTime:(double)a0;
- (id)worldToFilmMatrix;
- (id)worldToObjectMatrix;
- (id)worldToEyeMatrix;
- (double)focalLengthAtFxTime:(union { double x0; struct *x1; })a0;
- (void)_setCameraMatrix:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a0;
- (void)_setWorldToFilmMatrix:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a0;
- (void)_setLayerMatrix:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a0;
- (void)_setWorldToLayerMatrix:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a0;
- (void)_setWorldToObjectMatrix:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a0;
- (void)_setWorldToEyeMatrix:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a0;
- (void)_setIs3D:(BOOL)a0;
- (void)_setFocalLength:(double)a0;
- (id)worldToLayerMatrix;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;

@end
