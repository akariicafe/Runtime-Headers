@interface RMDSystemArc4RandomSource : RMDRandomSource

- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
