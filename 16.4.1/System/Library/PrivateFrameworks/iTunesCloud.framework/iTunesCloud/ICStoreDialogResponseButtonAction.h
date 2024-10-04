@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *actionDictionary;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *buyParams;
@property (readonly, copy, nonatomic) NSString *itemName;
@property (readonly, copy, nonatomic) NSString *subtarget;
@property (readonly, copy, nonatomic) NSString *URLString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithResponseButtonActionDictionary:(id)a0;

@end
