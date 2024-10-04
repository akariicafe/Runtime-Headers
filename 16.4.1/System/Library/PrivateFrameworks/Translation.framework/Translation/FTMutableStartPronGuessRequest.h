@class NSString;

@interface FTMutableStartPronGuessRequest : FTStartPronGuessRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) long long codec;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
