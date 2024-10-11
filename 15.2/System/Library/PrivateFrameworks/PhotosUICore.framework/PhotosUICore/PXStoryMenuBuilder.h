@class NSMutableArray;

@interface PXStoryMenuBuilder : NSObject

@property (readonly, nonatomic) NSMutableArray *menuItems;

+ (void)_addDurationSectionToMenuBuilder:(id)a0 withViewModel:(id)a1;
+ (id)defaultStoryActionsMenuWithViewModel:(id)a0;
+ (id)menuWithDeferredConfiguration:(id /* block */)a0;
+ (id)_menuWithConfiguration:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)addSectionWithConfiguration:(id /* block */)a0;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 handler:(id /* block */)a2;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 state:(long long)a2 options:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 submenuConfiguration:(id /* block */)a2;
- (void)_addMenuItem:(id)a0;

@end
