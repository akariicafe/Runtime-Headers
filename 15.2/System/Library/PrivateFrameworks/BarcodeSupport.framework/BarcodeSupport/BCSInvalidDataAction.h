@interface BCSInvalidDataAction : BCSAction

- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (BOOL)isInvalidDataAction;

@end
