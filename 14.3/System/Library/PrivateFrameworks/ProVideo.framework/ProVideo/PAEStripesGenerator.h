@interface PAEStripesGenerator : PAEGeneratorDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)a0;
- (BOOL)addParameters;
- (BOOL)variesOverTime;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 hardware:(BOOL *)a1 software:(BOOL *)a2;
- (BOOL)canThrowRenderOutput:(id)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1;

@end
