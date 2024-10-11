@class NSString, NSArray;

@interface FTMutableLmScorerResponse : FTLmScorerResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *tokens;
@property (nonatomic) double ppl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
