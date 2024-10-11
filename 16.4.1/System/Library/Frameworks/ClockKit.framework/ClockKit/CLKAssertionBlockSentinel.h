@class NSString;

@interface CLKAssertionBlockSentinel : NSObject

@property (copy, nonatomic) NSString *message;
@property (getter=isCalled) BOOL called;
@property (nonatomic, getter=shouldBeFatal) BOOL fatal;
@property (copy, nonatomic) id /* block */ fallbackBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (void)markCalled;

@end
