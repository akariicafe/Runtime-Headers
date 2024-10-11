@class MPSGraphFFTDescriptor;

@interface MPSGraphHermiteanToRealFFTOp : MPSGraphOperation {
    MPSGraphFFTDescriptor *_desc;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 descriptor:(id)a3 name:(id)a4;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativesForInputTensors:(id)a0 incomingGradients:(id)a1 name:(id)a2;

@end
