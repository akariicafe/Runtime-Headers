@interface TMLSize : NSObject <TMLSizeJSExports, NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;

+ (void)initializeJSContext:(id)a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)min:(double)a0 :(double)a1;
- (id)max:(double)a0 :(double)a1;
- (id)CGSizeValue;
- (id)description;
- (id)asRect;
- (id)scale:(double)a0 :(double)a1;
- (id)extend:(double)a0 :(double)a1;

@end
