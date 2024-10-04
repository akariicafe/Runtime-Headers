@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } nameRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } valueRange;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL important;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
