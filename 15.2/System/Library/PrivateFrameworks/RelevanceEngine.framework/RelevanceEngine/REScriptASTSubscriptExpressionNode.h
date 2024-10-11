@class REScriptASTNode;

@interface REScriptASTSubscriptExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *expression;
@property (readonly, nonatomic) REScriptASTNode *startIndex;
@property (readonly, nonatomic) REScriptASTNode *endIndex;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (id)dependencies;
- (void).cxx_destruct;
- (id)initWithExpression:(id)a0 startIndex:(id)a1 endIndex:(id)a2;

@end
