@class UIView, NSArray, UIBarButtonItem;

@interface TVModalPresentationConfiguration : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL allowsModalOverModal;
@property (nonatomic, getter=isMenuDismissable) BOOL menuDismissable;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (retain, nonatomic) UIBarButtonItem *popOverSourceBarButtonItem;
@property (retain, nonatomic) UIView *popOverSourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popOverSourceRect;
@property (nonatomic) unsigned long long popOverArrowDirection;
@property (retain, nonatomic) NSArray *alertActions;

+ (id)presentationTypeKeyMap;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_applyAlertActionsForController:(id)a0;

@end
