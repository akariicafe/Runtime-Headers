@class NSDictionary, NSString, NSArray;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL allowsAutoSubmission;
@property (readonly, nonatomic) NSDictionary *redeemCodeDictionary;
@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) NSString *codeType;
@property (copy, nonatomic) NSString *inputCode;
@property (readonly, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRedeemCodeDictionary:(id)a0;

@end
