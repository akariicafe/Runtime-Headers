@class WFDrawerAnimation;

@interface WFDrawerAnimationManager : NSObject {
    WFDrawerAnimation *_heightAnimation;
    unsigned long long _heightAnimationPushCount;
}

@property (readonly, nonatomic) WFDrawerAnimation *heightAnimation;

- (void).cxx_destruct;
- (id)defaultHeightAnimation;
- (void)pushHeightAnimation:(id)a0;
- (void)popHeightAnimation;

@end
