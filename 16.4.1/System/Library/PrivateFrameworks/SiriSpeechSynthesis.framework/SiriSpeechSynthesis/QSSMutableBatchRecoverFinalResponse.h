@class NSString;

@interface QSSMutableBatchRecoverFinalResponse : QSSBatchRecoverFinalResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (nonatomic) int num_of_requested;
@property (nonatomic) int num_of_processed;
@property (nonatomic) int num_of_succeeded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
