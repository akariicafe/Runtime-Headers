@interface TSKFidgetResolver : NSObject {
    id *_values;
    double *_times;
    unsigned long long _head;
}

@property (nonatomic) double fidgetThreshold;
@property (readonly, nonatomic) id nonFidgetValue;

- (void)dealloc;
- (id)init;
- (void)p_advanceHead;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)a0;
- (void)pushValue:(id)a0;
- (void)pushValue:(id)a0 withTime:(double)a1;

@end
