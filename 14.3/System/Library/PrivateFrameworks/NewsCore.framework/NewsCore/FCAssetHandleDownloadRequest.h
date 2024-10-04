@class NSString;

@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing>

@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ priorityHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long relativePriority;

- (void)cancel;
- (void).cxx_destruct;

@end
