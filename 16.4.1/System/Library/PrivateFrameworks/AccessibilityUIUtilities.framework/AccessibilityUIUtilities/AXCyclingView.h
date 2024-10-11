@class NSArray;
@protocol AXCyclingViewDelegate;

@interface AXCyclingView : UIView

@property (nonatomic) unsigned long long cycleIndex;
@property (nonatomic) BOOL isMakingNextViewVisible;
@property (nonatomic) BOOL shouldSkipMakingNextViewVisible;
@property (readonly, nonatomic) NSArray *viewsInCycle;
@property (weak, nonatomic) id<AXCyclingViewDelegate> delegate;

- (void)didMoveToWindow;
- (void).cxx_destruct;
- (void)_makeNextViewVisible;
- (void)_updateForCycleIndex;
- (void)beginCycling;
- (void)endCycling;

@end
