@class AXCCTextSizeHelper, CCUIContentModuleContext, AXCCTextSizeModuleViewController, NSString, AXCCTextSizeBackgroundViewController, UIViewController;
@protocol CCUIContentModuleBackgroundViewController;

@interface AXCCTextSizeModule : NSObject <AXCCTextSizeModuleViewControllerDelegate, CCUIContentModule> {
    AXCCTextSizeHelper *_helper;
    AXCCTextSizeBackgroundViewController *_bgController;
}

@property (retain, nonatomic) AXCCTextSizeModuleViewController *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)contentViewControllerForContext:(id)a0;
- (void)expandModule;
- (void).cxx_destruct;
- (id)backgroundViewControllerForContext:(id)a0;
- (void)moduleDidExpand;

@end
