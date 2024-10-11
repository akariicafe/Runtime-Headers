@class HKGraphSeriesDataSource, NSString, _HKInteractiveChartOverlayWaitForCacheData, NSMutableArray, HKInteractiveChartOverlayViewController;
@protocol HKGraphSeriesDataSourceDelegate;

@interface _HKInteractiveChartOverlayWaitForDataSource : NSObject <HKGraphSeriesDataSourceDelegate>

@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayController;
@property (weak, nonatomic) _HKInteractiveChartOverlayWaitForCacheData *parent;
@property (retain, nonatomic) id<HKGraphSeriesDataSourceDelegate> previousDelegate;
@property (retain, nonatomic) NSMutableArray *deliveries;
@property (readonly, nonatomic) HKGraphSeriesDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_requestDataForTimeScope:(long long)a0 resolution:(long long)a1 startDate:(id)a2 endDate:(id)a3 priorityDelegate:(id)a4;
- (void)addWaitForDataGraphSeriesContext:(id)a0 timeScope:(long long)a1 resolution:(long long)a2 startDate:(id)a3 endDate:(id)a4 priorityDelegate:(id)a5 completion:(id /* block */)a6;
- (void)dataSourceDidUpdateCache:(id)a0;
- (id)initWithOverlayController:(id)a0 dataSource:(id)a1 parent:(id)a2;

@end
