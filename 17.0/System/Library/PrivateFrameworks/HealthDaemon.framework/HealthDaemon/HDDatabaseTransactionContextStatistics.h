@class NSArray, NSString, NSMutableArray;

@interface HDDatabaseTransactionContextStatistics : NSObject {
    NSMutableArray *_transactions;
}

@property (readonly, copy, nonatomic) NSArray *transactions;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, copy, nonatomic) NSString *shortDescription;

- (id)init;
- (void)_addTransactionStatistics:(id)a0;
- (void).cxx_destruct;

@end
