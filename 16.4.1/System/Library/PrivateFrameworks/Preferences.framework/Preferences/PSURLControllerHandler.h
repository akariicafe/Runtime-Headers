@class NSObject;
@protocol PSURLControllerHandlerDelegate;

@interface PSURLControllerHandler : NSObject

@property (weak, nonatomic) NSObject<PSURLControllerHandlerDelegate> *delegate;

- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
