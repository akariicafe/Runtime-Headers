@interface MPSNDArrayBinarySecondaryGradientKernel : MPSNDArrayMultiaryGradientKernel

+ (unsigned long long)expectedVirtualSourceCount;

- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0;
- (id)encodeToCommandBuffer:(id)a0 primarySourceArray:(id)a1 secondarySourceArray:(id)a2 sourceGradient:(id)a3 gradientState:(id)a4;
- (void)encodeToCommandBuffer:(id)a0 primarySourceArray:(id)a1 secondarySourceArray:(id)a2 sourceGradient:(id)a3 gradientState:(id)a4 destinationArray:(id)a5;

@end
