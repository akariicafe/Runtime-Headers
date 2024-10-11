@class MLNeuralNetworkEngine;
@protocol MLBatchProvider;

@interface MLComputeBatchDataSource : NSObject <MLComputeDataProvider>

@property (readonly, nonatomic) id<MLBatchProvider> batchProvider;
@property (readonly, nonatomic) MLNeuralNetworkEngine *nnEngine;
@property (readonly, nonatomic) BOOL useForPrediction;
@property (nonatomic) unsigned long long batchSize;

- (id)batchAtIndex:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)sizeOfBatchAtIndex:(unsigned long long)a0;
- (id)initWithBatchProvider:(id)a0 batchSize:(unsigned long long)a1 forPrediction:(BOOL)a2 neuralNetworkEngine:(id)a3 error:(id *)a4;
- (id)mlcDataSourceAtIndex:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (unsigned long long)numberOfBatches;

@end
