@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction

@property (nonatomic) unsigned long long destination;

+ (id)forwardNavigationAction;
+ (id)backNavigationAction;
+ (id)_navigationActionForDestination:(unsigned long long)a0;

@end
