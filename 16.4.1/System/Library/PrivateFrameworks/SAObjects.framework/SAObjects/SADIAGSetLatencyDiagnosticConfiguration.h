@class NSArray;

@interface SADIAGSetLatencyDiagnosticConfiguration : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *diagnosticActions;

+ (id)setLatencyDiagnosticConfiguration;
+ (id)setLatencyDiagnosticConfigurationWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
