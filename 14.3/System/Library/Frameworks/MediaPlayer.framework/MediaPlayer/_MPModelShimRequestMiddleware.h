@class NSArray, NSString, MPModelResponse;

@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware>

@property (retain, nonatomic) MPModelResponse *modelResponse;
@property (retain, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)operationsForRequest:(id)a0;

@end
