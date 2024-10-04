@class NSDictionary, STAlwaysAllowList, STDeviceBedtime;

@interface STTimeAllowancesViewModel : NSObject

@property (nonatomic) BOOL allAllowancesEnabled;
@property (copy, nonatomic) STDeviceBedtime *bedtime;
@property (copy, nonatomic) NSDictionary *allowancesByIdentifier;
@property (copy, nonatomic) STAlwaysAllowList *alwaysAllowList;
@property (copy, nonatomic) NSDictionary *pendingAskForTimeByIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
