@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {
    NSTimer *_timer;
    NSDate *_earliest;
}

- (void)addAssertion:(id)a0;
- (void)main;
- (void)didTimeOut:(id)a0;

@end
