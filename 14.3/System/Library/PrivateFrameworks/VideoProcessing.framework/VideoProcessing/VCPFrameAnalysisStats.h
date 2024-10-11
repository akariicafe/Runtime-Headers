@class VCPVideoActivityDescriptor, NSMutableArray;

@interface VCPFrameAnalysisStats : NSObject

@property (nonatomic) BOOL frameProcessedByVideoAnalyzer;
@property (nonatomic) float cameraMotionScore;
@property (nonatomic) float subjectActionScore;
@property (nonatomic) float interestingnessScore;
@property (nonatomic) float obstructionScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float colorfulnessScore;
@property (nonatomic) BOOL subMbMotionAvailable;
@property (nonatomic) float frameExpressionScore;
@property (nonatomic) float faceArea;
@property (nonatomic) BOOL frameProcessedByHumanAnalyzer;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) BOOL frameProcessedByFaceDetector;
@property (retain, nonatomic) NSMutableArray *detectedFaces;
@property (retain, nonatomic) VCPVideoActivityDescriptor *videoActivityDescriptor;

- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
