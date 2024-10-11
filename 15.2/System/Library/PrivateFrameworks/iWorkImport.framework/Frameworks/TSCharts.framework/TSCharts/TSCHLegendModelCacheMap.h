@class TSCHChartModel, TSCHLegendModelCache, NSMapTable, TSUPair;

@interface TSCHLegendModelCacheMap : NSObject {
    TSCHChartModel *_model;
    TSUPair *_selectionPair;
    TSCHLegendModelCache *_mainCache;
    NSMapTable *_map;
}

- (void).cxx_destruct;
- (id)mainCache;
- (id)textCacheForStyleProvidingSource:(id)a0;
- (id)newLegendModelCacheForStyleProvidingSource:(id)a0;
- (id)initWithChartModel:(id)a0 textEditingSelectionPair:(id)a1;

@end
