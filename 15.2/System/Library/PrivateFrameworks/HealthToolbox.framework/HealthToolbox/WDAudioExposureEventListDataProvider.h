@interface WDAudioExposureEventListDataProvider : WDSampleListDataProvider

- (id)sampleTypes;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)a0;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (double)customEstimatedCellHeight;
- (double)customCellHeight;

@end
