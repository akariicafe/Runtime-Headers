@class EQKitMathMLNode;

@interface EQKitMathMLMAction : EQKitMathMLNode <EQKitMathMLNode> {
    EQKitMathMLNode *mExpression;
}

- (void)dealloc;
- (const struct set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> > { } *)mathMLAttributes;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (BOOL)isEmbellishedOperator;
- (id)operatorCore;
- (id)initFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 parser:(id)a1;

@end
