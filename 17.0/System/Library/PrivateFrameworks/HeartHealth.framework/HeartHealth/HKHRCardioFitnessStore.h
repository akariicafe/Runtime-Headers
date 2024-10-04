@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKHRCardioFitnessStore : NSObject <HKHRCardioFitnessStoreClient, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)saveCardioFitnessEventWithValue:(id)a0 threshold:(id)a1 dateInterval:(id)a2 completion:(id /* block */)a3;
- (void)saveCardioFitnessEventWithValue:(id)a0 threshold:(id)a1 dateInterval:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;

@end
