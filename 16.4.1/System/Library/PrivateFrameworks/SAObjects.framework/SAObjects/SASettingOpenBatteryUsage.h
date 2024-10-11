@class NSString;

@interface SASettingOpenBatteryUsage : SASettingOpenSettings <SASettingSettingsAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openBatteryUsage;
+ (id)openBatteryUsageWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
