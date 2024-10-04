@class NSString, NSArray, NSData, NSMutableData;

@interface PMLEspressoDataProvider : NSObject <ETDataProvider> {
    NSArray *_rowsData;
    NSData *_labelsData;
    NSString *_inputName;
    unsigned long long _inputDim;
    NSString *_trueLabelName;
    unsigned long long _numberOfDataPoints;
    NSMutableData *_inputBuffer;
    NSMutableData *_trueLabelBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)numberOfDataPoints;
- (id)dataPointAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)initWithRowsData:(id)a0 labelsData:(id)a1 inputName:(id)a2 inputDim:(unsigned long long)a3 trueLabelName:(id)a4;
- (void)clearBuffers;

@end
