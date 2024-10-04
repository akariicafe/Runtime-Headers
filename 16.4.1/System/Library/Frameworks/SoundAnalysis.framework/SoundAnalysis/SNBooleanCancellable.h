@class NSString;

@interface SNBooleanCancellable : NSObject <SNCancellable> {
    BOOL _isCancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;

@end
