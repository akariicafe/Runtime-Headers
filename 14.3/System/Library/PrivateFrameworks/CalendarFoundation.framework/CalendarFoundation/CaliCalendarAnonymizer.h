@interface CaliCalendarAnonymizer : NSObject

+ (void)dump;
+ (id)sharedAnonymizedDomainName;
+ (id)sharedAnonymizedStrings;
+ (id)anonymizedString:(id)a0;
+ (id)sharedAnonymizedStringsCount;
+ (id)anonymizedString:(id)a0 withAnonymizer:(id /* block */)a1;
+ (id)anonymizedSummary:(id)a0;
+ (id)anonymizedDescription:(id)a0;
+ (id)anonymizedUID:(id)a0;
+ (id)anonymizedURNUID:(id)a0;
+ (id)anonymizedEmailCommonName:(id)a0;
+ (id)anonymizedEmail:(id)a0;
+ (id)anonymizedLocation:(id)a0;
+ (id)anonymizedPhoneNumber:(id)a0;
+ (id)anonymizedWebURL:(id)a0;
+ (id)anonymizedAddressURL:(id)a0;

@end
