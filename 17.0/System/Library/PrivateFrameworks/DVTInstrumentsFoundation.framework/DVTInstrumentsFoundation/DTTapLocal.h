@class NSObject;
@protocol DTTapLocalDelegate, OS_dispatch_source;

@interface DTTapLocal : DTTap {
    NSObject<OS_dispatch_source> *_pollTimer;
    BOOL _validConfig;
}

@property (readonly, retain) id<DTTapLocalDelegate> delegate;

- (void)_start;
- (void).cxx_destruct;
- (void)_stop;
- (void)_unpause;
- (void)_pause;
- (BOOL)_canFetchWhileArchiving;
- (id)_fetchDataForReason:(unsigned long long)a0;
- (void)_handleStatusMemo:(id)a0;
- (id)initWithConfig:(id)a0 memoHandler:(id)a1 delegate:(id)a2;

@end
