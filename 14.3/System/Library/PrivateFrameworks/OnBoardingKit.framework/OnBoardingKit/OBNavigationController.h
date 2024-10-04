@interface OBNavigationController : UINavigationController

@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (void)setViewControllers:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;

@end
