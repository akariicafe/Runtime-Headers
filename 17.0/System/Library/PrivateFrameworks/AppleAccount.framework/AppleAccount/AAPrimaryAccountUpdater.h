@class ACAccount;

@interface AAPrimaryAccountUpdater : AAVersionUpdater <AADataclassVersionUpdateProtocol> {
    ACAccount *_appleAccount;
}

+ (id)orderedVersions;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (BOOL)performVersionUpdate1ToVersion2;
- (BOOL)performVersionUpdate0ToVersion1;

@end
