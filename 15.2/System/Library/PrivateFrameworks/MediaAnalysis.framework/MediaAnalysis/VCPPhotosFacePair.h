@class VCPPhotosFace;

@interface VCPPhotosFacePair : NSObject

@property (readonly, nonatomic) VCPPhotosFace *face1;
@property (readonly, nonatomic) VCPPhotosFace *face2;
@property (readonly, nonatomic) double score;

+ (id)pairWithFace:(id)a0 andFace:(id)a1 andScore:(double)a2;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 andFace:(id)a1 andScore:(double)a2;

@end
