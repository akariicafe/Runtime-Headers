@class NSString, TMLContext, NSArray;

@interface TMLExpressionReactiveValue : TMLReactiveValue {
    NSString *_expression;
    TMLContext *_context;
    NSArray *_bindings;
}

- (id)value;
- (void).cxx_destruct;
- (id)initWithExpression:(id)a0 context:(id)a1 bindings:(id)a2 valueType:(unsigned long long)a3;

@end
