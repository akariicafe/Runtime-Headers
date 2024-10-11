@interface UPCalibration : NSObject

+ (id)calibrateResult:(id)a0 withCalibrationScore:(double)a1;
+ (id)calibrateCandidate:(id)a0 withCalibrationScore:(double)a1;

- (id)calibrateParserResults:(id)a0 withCalibrationScores:(id)a1 error:(id *)a2;

@end
