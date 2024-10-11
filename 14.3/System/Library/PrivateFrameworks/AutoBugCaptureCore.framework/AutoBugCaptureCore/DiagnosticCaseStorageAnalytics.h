@interface DiagnosticCaseStorageAnalytics : ObjectAnalytics

- (id)init;
- (id)initWithWorkspace:(id)a0 withCache:(BOOL)a1;
- (id)diagnosticCaseStorageWithIdentifier:(id)a0;
- (id)diagnosticCaseDictionaryKeys;
- (id)diagnosticCaseStorageDictionaryForIdentifier:(id)a0 properties:(id)a1;
- (id)diagnosticCaseStorageWithId:(id)a0;
- (id)historicalDiagnosticCaseStorageFromIdentifier:(id)a0 count:(unsigned long long)a1;
- (id)historicalDiagnosticCaseStorageDictionaryFromIdentifier:(id)a0 withEvents:(BOOL)a1 count:(unsigned long long)a2;
- (id)allDiagnosticCasesStorage;
- (id)allDiagnosticCasesStorageDictionariesWithProperties:(id)a0;
- (long long)removeAllDiagnosticCaseStorages;

@end
