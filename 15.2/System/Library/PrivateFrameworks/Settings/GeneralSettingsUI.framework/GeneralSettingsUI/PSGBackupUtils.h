@interface PSGBackupUtils : NSObject

+ (BOOL)isDomainWhitelisted:(id)a0;
+ (id)displayNameForDomainInfo:(id)a0;
+ (id)bundleIdForDomainInfo:(id)a0;
+ (BOOL)shouldIgnoreBundleId:(id)a0;
+ (BOOL)isiCloudPhotosEnabled;
+ (void)fetchBackupDisabledAppsWithBackupManager:(id)a0 completion:(id /* block */)a1;
+ (void)configureAlertMessageOfType:(unsigned long long)a0 AndTitleForBackUpDisabledApps:(id)a1 completion:(id /* block */)a2;
+ (id)alertTitleForBackupDisabledAppsInfo:(id)a0;
+ (id)alertBodyForBackupDisabledAppsInfo:(id)a0 ofType:(unsigned long long)a1;
+ (BOOL)isDomainNameIgnored:(id)a0;
+ (BOOL)hasValidDisplayNameOfDomain:(id)a0;

@end
