@class NSString, NSArray;

@interface QSSMutableRecoverPronsRequest : QSSRecoverPronsRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *apg_ids;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
