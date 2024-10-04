@class SBIconView, NSSet, NSString;

@interface SBHIconLaunchContext : NSObject <SBHIconLaunchContext>

@property (retain, nonatomic) SBIconView *iconView;
@property (copy, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
