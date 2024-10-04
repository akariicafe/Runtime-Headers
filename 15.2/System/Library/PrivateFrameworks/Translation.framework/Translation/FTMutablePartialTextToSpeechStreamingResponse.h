@class NSString, NSArray, NSData, FTTextToSpeechFeature;

@interface FTMutablePartialTextToSpeechStreamingResponse : FTPartialTextToSpeechStreamingResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) int current_pkt_number;
@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;
@property (copy, nonatomic) FTTextToSpeechFeature *feature;

- (void)audio:(id /* block */)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
