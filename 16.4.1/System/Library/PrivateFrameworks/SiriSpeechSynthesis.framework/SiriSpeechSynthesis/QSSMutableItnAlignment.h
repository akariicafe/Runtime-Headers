@interface QSSMutableItnAlignment : QSSItnAlignment

@property (nonatomic) int first_pre_itn_token_index;
@property (nonatomic) int last_pre_itn_token_index;
@property (nonatomic) int first_post_itn_char_pos;
@property (nonatomic) int last_post_itn_char_pos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
