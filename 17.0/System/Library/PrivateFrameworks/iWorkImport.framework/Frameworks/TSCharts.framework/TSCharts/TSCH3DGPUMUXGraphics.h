@interface TSCH3DGPUMUXGraphics : NSObject {
    long long _interestCount;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addInterestForDiscreteGraphics;
- (void)removeInterestForDiscreteGraphics;

@end
