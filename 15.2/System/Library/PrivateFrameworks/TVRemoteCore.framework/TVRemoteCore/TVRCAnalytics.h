@interface TVRCAnalytics : NSObject

+ (id)sharedInstance;

- (id)_presentationSourceEventDictionaryFor:(id)a0;
- (id)_spinnerShownDictionaryFor:(id)a0;
- (id)_connectionDictionaryForType:(id)a0 status:(id)a1 reason:(id)a2;
- (void)logPresentationFrom:(id)a0;
- (void)logConnectingSpinnerShown:(id)a0;
- (void)logSearchingSpinnerShown;
- (void)logConnectionStatus:(long long)a0 type:(long long)a1 reason:(long long)a2;
- (void)logShortcutActionRunWithType:(id)a0;
- (void)logSessionStatistics:(id)a0;

@end
