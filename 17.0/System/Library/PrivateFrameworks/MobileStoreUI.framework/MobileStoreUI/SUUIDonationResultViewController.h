@class NSString, SUUIDonationResultView, SUUIGiftAmount;

@interface SUUIDonationResultViewController : SUUIDonationStepViewController <SUUIDonationConfigurationObserver> {
    SUUIDonationResultView *_resultView;
}

@property (copy, nonatomic) SUUIGiftAmount *donationAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (void)_doneButtonAction:(id)a0;
- (void)donationConfigurationController:(id)a0 didLoadLogoForCharity:(id)a1;
- (id)initWithCharity:(id)a0 configuration:(id)a1;

@end
