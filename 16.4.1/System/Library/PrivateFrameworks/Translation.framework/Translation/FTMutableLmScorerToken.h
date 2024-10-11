@class NSString;

@interface FTMutableLmScorerToken : FTLmScorerToken

@property (copy, nonatomic) NSString *token_str;
@property (nonatomic) double log10_score;
@property (nonatomic) int ngram_used;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
