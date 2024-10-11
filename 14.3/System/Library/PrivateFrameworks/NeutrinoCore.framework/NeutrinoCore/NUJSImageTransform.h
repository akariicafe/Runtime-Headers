@class NUImageTransform;

@interface NUJSImageTransform : NUJSProxy <NUJSImageTransformExport>

@property (readonly) NUImageTransform *transform;

- (id)description;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)transformByScaleX:(double)a0 scaleY:(double)a1;
- (id)transformByTranslateX:(double)a0 translateY:(double)a1;
- (id)transformByRotateZ:(double)a0;
- (id)transformByRotateX:(double)a0 y:(double)a1 z:(double)a2;
- (id)initWithImageTransform:(id)a0 context:(id)a1;

@end
