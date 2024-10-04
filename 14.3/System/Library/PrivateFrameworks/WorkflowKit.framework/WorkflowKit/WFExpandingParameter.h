@class NSString;
@protocol WFExpandingParameterHintProvider;

@interface WFExpandingParameter : WFParameter

@property (weak, nonatomic) id<WFExpandingParameterHintProvider> hintProvider;
@property (readonly, nonatomic) NSString *hintLabel;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;

@end
