@class NSString;

@interface UIKeyboardSplitControlMenu_Split : NSObject <UIKeyboardSplitControlMenuItem>

@property (readonly, retain) NSString *label;
@property (readonly) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionForMenu:(id)a0;

@end
