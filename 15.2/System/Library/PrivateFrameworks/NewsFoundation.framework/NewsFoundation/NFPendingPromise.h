@class NFPromise;

@interface NFPendingPromise : NSObject

@property (retain, nonatomic) NFPromise *promise;
@property (copy, nonatomic) id /* block */ resolve;
@property (copy, nonatomic) id /* block */ reject;

- (void).cxx_destruct;
- (id)init;

@end
