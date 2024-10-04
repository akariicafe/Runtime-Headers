@class NSObject, NSString, PKPaymentDefaultDataProvider, NSCalendar, PKTransactionSource, PKAccount;
@protocol OS_dispatch_queue;

@interface PKBalanceSummaryFetcher : NSObject <PKPaymentDataProviderDelegate> {
    PKTransactionSource *_transactionSource;
    PKAccount *_account;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    NSCalendar *_currentCalendar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_sortedTransactions:(id)a0 ascending:(BOOL)a1;
- (id)initWithTransactionSource:(id)a0 account:(id)a1;
- (void)balanceSummaryStartingWithDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)_summaryWithTransactions:(id)a0 currency:(id)a1 type:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4;
- (BOOL)_transactionIsPurchase:(id)a0;
- (BOOL)_transactionIsInterest:(id)a0;
- (BOOL)_transactionIsCredit:(id)a0;

@end
