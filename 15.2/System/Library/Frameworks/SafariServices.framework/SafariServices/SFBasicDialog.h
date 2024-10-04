@class NSString, NSArray;

@interface SFBasicDialog : _SFDialog

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultText;
@property (copy, nonatomic) NSString *textPlaceholder;
@property (copy, nonatomic) NSString *defaultPassword;
@property (copy, nonatomic) NSString *passwordPlaceholder;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL alertControllerPresentsAsActionSheet;
@property (nonatomic) BOOL shouldHideWebContent;
@property (nonatomic) BOOL canceledOnProvisionalNavigation;
@property (nonatomic) BOOL canceledOnCommittedNavigation;
@property (nonatomic) BOOL canceledOnApplicationBackground;
@property (copy, nonatomic) NSArray *additionalCancellationExemptions;
@property (nonatomic) BOOL completionHandlerBlocksWebProcess;
@property (nonatomic) long long presentationStyle;

- (void).cxx_destruct;
- (id)init;
- (id)newDialogViewRepresentation;
- (void)didCompleteWithResponse:(id)a0;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)a0;

@end
