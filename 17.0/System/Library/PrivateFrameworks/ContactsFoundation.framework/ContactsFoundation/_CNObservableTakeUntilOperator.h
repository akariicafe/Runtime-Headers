@class NSString, CNObservable;
@protocol CNCancelable;

@interface _CNObservableTakeUntilOperator : CNObservable <_CNObservableTakeUntilInputObserverDelegate, _CNObservableTakeUntilSignalObserverDelegate>

@property (readonly) CNObservable *input;
@property (readonly) CNObservable *signal;
@property (getter=isActive) BOOL active;
@property (retain) id<CNCancelable> inputToken;
@property (retain) id<CNCancelable> signalToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithInput:(id)a0 signal:(id)a1;
- (BOOL)shouldMirrorEvent:(id)a0;
- (void)signalDidGenerateEventWithObserver:(id)a0;

@end
