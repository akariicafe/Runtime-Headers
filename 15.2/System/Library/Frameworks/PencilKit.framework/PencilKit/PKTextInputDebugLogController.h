@class NSString, NSMutableArray;

@interface PKTextInputDebugLogController : NSObject <PKTextInputDebugStateReporting> {
    NSMutableArray *__logEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (BOOL)debugStateCanDisplayDetails;
- (id)debugStateDetailViewController;

@end
