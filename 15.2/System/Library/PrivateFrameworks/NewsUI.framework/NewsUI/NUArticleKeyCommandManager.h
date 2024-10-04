@class UIScrollView, NSString;

@interface NUArticleKeyCommandManager : NSObject <NUArticleKeyCommandManager>

@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL hasBeenTraversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)keyCommandsWithSelector:(SEL)a0;
- (void)handleKeyCommand:(id)a0;
- (void)handleKey:(id)a0 flags:(long long)a1;
- (void)registerScrollView:(id)a0;

@end
