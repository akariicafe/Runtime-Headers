@class CHDChart;

@interface CHDSeriesCollection : EDSortedCollection {
    CHDChart *mChart;
}

+ (id)seriesCollectionWithChart:(id)a0;

- (unsigned long long)addObject:(id)a0;
- (void).cxx_destruct;
- (id)firstNonEmptySeries;
- (id)initWithChart:(id)a0;
- (unsigned long long)nonEmptySeriesCount;

@end
