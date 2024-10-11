@class NSMutableArray;

@interface MLStreamingInputDataSource : NSObject <MLComputeDataProvider>

@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSMutableArray *dataSources;

- (void).cxx_destruct;
- (unsigned long long)numberOfBatches;
- (void)appendBatchedTensors:(id)a0 numberOfTensors:(unsigned long long)a1;
- (id)batchAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)initWithBatchSize:(unsigned long long)a0;
- (unsigned long long)sizeOfBatchAtIndex:(unsigned long long)a0;

@end
