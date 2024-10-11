@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate

@property (readonly) unsigned long long type;

- (void)dealloc;
- (id)initWithType:(unsigned long long)a0;
- (id)title;
- (float)efficiencyForItems:(id)a0;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (long long)hourInGMT:(id)a0;
- (unsigned long long)timeOfDay:(id)a0;
- (id)timeOfDayAsString:(unsigned long long)a0;

@end
