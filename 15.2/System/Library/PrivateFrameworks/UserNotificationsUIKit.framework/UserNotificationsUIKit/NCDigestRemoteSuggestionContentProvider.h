@interface NCDigestRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider

- (void)configureOptionButtons:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3 uuid:(id)a4;
- (void)handleRejectAction:(id)a0;
- (void)handleAcceptAction:(id)a0;

@end
