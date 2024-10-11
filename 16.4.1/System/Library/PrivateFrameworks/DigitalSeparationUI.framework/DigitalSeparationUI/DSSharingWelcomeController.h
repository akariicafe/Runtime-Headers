@class NSString;
@protocol DSNavigationDelegate;

@interface DSSharingWelcomeController : DSOBWelcomeController <DSController>

@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;

@end
