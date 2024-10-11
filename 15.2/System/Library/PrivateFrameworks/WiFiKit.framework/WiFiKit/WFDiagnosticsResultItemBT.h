@class NSArray, NSString;

@interface WFDiagnosticsResultItemBT : NSObject <WFDiagnosticsResultItem>

@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *suggestion;
@property (nonatomic) BOOL didPassTest;
@property (retain, nonatomic) NSArray *failedTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResults:(id)a0;

@end
