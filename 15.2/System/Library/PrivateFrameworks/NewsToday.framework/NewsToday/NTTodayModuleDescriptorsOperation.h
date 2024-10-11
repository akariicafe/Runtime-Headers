@class NSArray;
@protocol FCReadablePrivateDataStorage, FCContentContext;

@interface NTTodayModuleDescriptorsOperation : FCOperation

@property (copy, nonatomic) NSArray *contentRequests;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (nonatomic) BOOL requireRefreshedAppConfig;
@property (retain, nonatomic) id<FCReadablePrivateDataStorage> privateDataStorage;
@property (copy, nonatomic) id /* block */ descriptorsCompletion;

- (void).cxx_destruct;
- (id)init;

@end
