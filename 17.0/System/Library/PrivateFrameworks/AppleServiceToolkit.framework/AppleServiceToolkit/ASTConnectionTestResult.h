@class NSNumber, NSString;

@interface ASTConnectionTestResult : ASTMaterializedConnection <ASTTestResultHandling>

@property (readonly, nonatomic) NSNumber *testId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithTestResults:(id)a0;

@end
