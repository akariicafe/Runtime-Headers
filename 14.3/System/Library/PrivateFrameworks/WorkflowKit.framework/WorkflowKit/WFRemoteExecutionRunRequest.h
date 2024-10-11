@class NSString, WFRemoteExecutionCoordinator, NSDictionary, WFContentCollection, NSMutableArray;

@interface WFRemoteExecutionRunRequest : WFRemoteExecutionRequest <WFPBCodable>

@property (retain, nonatomic) NSMutableArray *variablesData;
@property (retain, nonatomic) NSMutableArray *inputData;
@property (retain, nonatomic) NSMutableArray *processedParametersData;
@property (retain, nonatomic) WFRemoteExecutionCoordinator *coordinator;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (readonly, nonatomic) NSDictionary *processedParameters;
@property (readonly, nonatomic) WFContentCollection *input;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;
- (void)inflateWithFileCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)inflateVariablesData:(id)a0 fileCoordinator:(id)a1 completion:(id /* block */)a2;
- (id)initWithAction:(id)a0 workflowControllerState:(id)a1;
- (void)inflateInputData:(id)a0 fileCoordinator:(id)a1 completion:(id /* block */)a2;
- (void)inflateProcessedParametersData:(id)a0 fileCoordinator:(id)a1 completion:(id /* block */)a2;

@end
