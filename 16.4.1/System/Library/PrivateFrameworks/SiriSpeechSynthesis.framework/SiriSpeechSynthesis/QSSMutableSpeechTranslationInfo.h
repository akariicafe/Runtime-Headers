@class QSSRecognitionSausage, NSArray;

@interface QSSMutableSpeechTranslationInfo : QSSSpeechTranslationInfo

@property (copy, nonatomic) QSSRecognitionSausage *raw_sausage;
@property (copy, nonatomic) NSArray *raw_nbest_choices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
