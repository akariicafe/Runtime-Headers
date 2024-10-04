@protocol CNUINavigationListStyle;

@interface CNUINavigationListStyleApplier : NSObject

@property (readonly, nonatomic) id<CNUINavigationListStyle> navigationListStyle;

- (void).cxx_destruct;
- (id)initWithNavigationListStyle:(id)a0;
- (void)applyNavigationListStyleToCell:(id)a0;
- (void)applyNavigationListStyleToDetailCell:(id)a0;
- (void)applyExpandedBackgroundNavigationListStyleToCell:(id)a0;
- (void)applyCollapsedBackgroundNavigationListStyleToCell:(id)a0;

@end
