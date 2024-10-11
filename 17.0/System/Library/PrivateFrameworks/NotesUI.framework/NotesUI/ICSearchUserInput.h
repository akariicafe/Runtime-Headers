@class NSString, NSArray;

@interface ICSearchUserInput : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)emptyInput;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_configureEmptyInput;
- (id)initWithSearchString:(id)a0 tokens:(id)a1 keyboardLanguage:(id)a2;

@end
