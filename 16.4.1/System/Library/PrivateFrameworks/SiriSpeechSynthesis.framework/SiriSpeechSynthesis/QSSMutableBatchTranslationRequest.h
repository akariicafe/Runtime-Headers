@class NSString, NSArray;

@interface QSSMutableBatchTranslationRequest : QSSBatchTranslationRequest

@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSArray *paragraphs;
@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long opt_in_status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
