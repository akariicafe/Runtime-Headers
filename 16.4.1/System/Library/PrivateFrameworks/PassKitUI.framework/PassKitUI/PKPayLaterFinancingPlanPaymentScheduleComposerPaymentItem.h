@class PKPayLaterPayment, NSString, PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanPaymentScheduleComposerPaymentItem : NSObject <PKPayLaterFinancingPlanPaymentScheduleComposerItem>

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKPayLaterPayment *payment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)type;
- (id)date;
- (void).cxx_destruct;
- (id)installmentIdentifier;
- (id)paymentIdentifier;
- (id)initWithFinancingPlan:(id)a0 payment:(id)a1;
- (void)populateRow:(id)a0;

@end
