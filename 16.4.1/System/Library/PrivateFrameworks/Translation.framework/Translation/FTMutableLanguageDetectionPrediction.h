@class NSString;

@interface FTMutableLanguageDetectionPrediction : FTLanguageDetectionPrediction

@property (copy, nonatomic) NSString *locale;
@property (nonatomic) float confidence;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL is_low_confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
