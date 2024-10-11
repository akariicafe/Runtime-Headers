@class NSString;

@interface WFCellularOutrankAlertController : WFPromptAlertController

@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *defaultButtonTitle;

+ (id)cancelButtonTitle;
+ (id)cellularOutrankAlertControllerWithNetworkName:(id)a0 chinaDevice:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)titleForNetworkName:(id)a0 chinaDevice:(BOOL)a1;
+ (id)messageForChinaDevice:(BOOL)a0;
+ (id)defaultButtonTitleForChinaDevice:(BOOL)a0;

- (void).cxx_destruct;

@end
