@interface NCNotificationManagementTimeSensitiveInDigestSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

- (void)configureOptionButtons:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3;
- (void)handleOffAction:(id)a0;
- (void)handleLeaveOnAction:(id)a0;

@end
