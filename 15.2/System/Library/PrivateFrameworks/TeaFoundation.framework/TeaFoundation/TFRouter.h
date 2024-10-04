@class NSString;
@protocol TFResolver;

@interface TFRouter : NSObject <TFRouter>

@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResolver:(id)a0;
- (void).cxx_destruct;
- (id)resolveRoutable:(id)a0;

@end
