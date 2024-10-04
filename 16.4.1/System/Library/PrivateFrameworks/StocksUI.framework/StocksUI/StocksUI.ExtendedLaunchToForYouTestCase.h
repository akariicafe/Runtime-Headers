@class NSString;

@interface StocksUI.ExtendedLaunchToForYouTestCase : NSObject <SNTestCaseRun> {
    void /* unknown type, empty encoding */ testName;
    void /* unknown type, empty encoding */ stockListPrewarmState;
    void /* unknown type, empty encoding */ forYouPrewarmState;
}

@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timeoutInSeconds;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ aggregate;

- (void)runTestWithContext:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
