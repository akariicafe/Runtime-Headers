@class NSNumber;

@interface WFNumberSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) NSNumber *number;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
+ (id)serializedRepresentationFromNumber:(id)a0;

- (id)initWithNumber:(id)a0;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
