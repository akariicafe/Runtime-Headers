@interface WFSelectPhotoAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)pickerTypes;
- (BOOL)selectMultiple;

@end
