@interface WDClinicalSettingsAboutSection : HRWDTableViewSection

- (unsigned long long)numberOfRows;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;
- (id)_tableViewPrivacyInfoCell:(id)a0;

@end
