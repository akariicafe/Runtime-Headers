@class NSArray;

@interface MCNotificationSettingsPayload : MCPayload

@property (retain, nonatomic) NSArray *notificationSettings;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)validatedNotificationSettings:(id)a0 outError:(id *)a1;

@end
