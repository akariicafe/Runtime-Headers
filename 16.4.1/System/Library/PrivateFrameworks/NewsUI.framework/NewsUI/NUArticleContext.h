@class SXScrollPosition;

@interface NUArticleContext : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL shouldAutoPlayVideo;
@property (readonly, nonatomic) SXScrollPosition *scrollPosition;
@property (readonly, nonatomic) BOOL shouldDisableTransparentNavigationBar;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithShouldAutoPlayVideo:(BOOL)a0 scrollPosition:(id)a1 shouldDisableTransparentNavigationBar:(BOOL)a2;

@end
