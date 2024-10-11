@interface MPSGraphLocalConvolutionOp : MPSGraphLocalConvolutionBase

- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 dataLayout:(unsigned long long)a3 kernelShape:(id)a4 dilationRateInX:(unsigned long long)a5 dilationRateInY:(unsigned long long)a6 name:(id)a7;

@end
