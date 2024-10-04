@class NTPBTodayResultOperationInfo;
@protocol FCFeedPersonalizerFactoryType, NFCopying, FCContentContext;

@interface NTTodayResultOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) id<FCFeedPersonalizerFactoryType> feedPersonalizerFactory;
@property (copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo;
@property (copy, nonatomic) id<NFCopying> prefetchedContent;
@property (copy, nonatomic) id /* block */ headlineResultCompletionHandler;

- (id)init;
- (void).cxx_destruct;

@end
