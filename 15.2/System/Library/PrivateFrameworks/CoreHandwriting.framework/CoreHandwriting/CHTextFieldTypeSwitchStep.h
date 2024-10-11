@class CHPostProcessingManager;

@interface CHTextFieldTypeSwitchStep : CHPostprocessingStep

@property (retain, nonatomic) CHPostProcessingManager *defaultProcessor;
@property (retain, nonatomic) CHPostProcessingManager *digitProcessor;
@property (retain, nonatomic) CHPostProcessingManager *phoneProcessor;
@property (retain, nonatomic) CHPostProcessingManager *usernameProcessor;
@property (retain, nonatomic) CHPostProcessingManager *emailProcessor;
@property (retain, nonatomic) CHPostProcessingManager *urlProcessor;
@property (retain, nonatomic) CHPostProcessingManager *asciiProcessor;
@property (retain, nonatomic) CHPostProcessingManager *equationProcessor;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initProcessorDefault:(id)a0 processorDigits:(id)a1 processorPhone:(id)a2 processorUsername:(id)a3 processorEmail:(id)a4 processorURL:(id)a5 processorASCII:(id)a6 processorEquation:(id)a7;
- (id)process:(id)a0 withProcessor:(id)a1;

@end
