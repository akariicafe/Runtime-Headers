@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration

@property struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property unsigned long long edgeFlag;
@property BOOL insetsFound;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)a0 info:(id)a1;

@end
