@class NSString;

@interface _HKSampleTypeQuery : HKQuery <HKSampleTypeQueryClientInterface> {
    id /* block */ _resultsHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

@end
