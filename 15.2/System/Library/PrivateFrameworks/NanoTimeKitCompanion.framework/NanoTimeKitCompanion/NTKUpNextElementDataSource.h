@interface NTKUpNextElementDataSource : REElementDataSource

- (id)supportedSections;
- (void)getElementsDuringDateInterval:(id)a0 inSection:(unsigned long long)a1 withHandler:(id /* block */)a2;

@end
