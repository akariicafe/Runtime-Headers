@class NSString;

@interface FTMutableErrorBlamerResponse : FTErrorBlamerResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *blamer_report;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
