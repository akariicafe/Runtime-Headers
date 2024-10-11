@class NSArray, NSString, WFAction;

@interface WFTrelloListPickerParameter : WFEnumerationParameter <WFActionEventObserver>

@property (retain, nonatomic) id observer;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (id)defaultSerializedRepresentation;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)updateLists;

@end
