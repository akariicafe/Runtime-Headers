@class NSString, NSDictionary, NSUUID;

@interface HMDHH2MigrationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic, getter=isDryRun) BOOL dryRun;
@property (readonly, nonatomic) double totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;
@property (readonly, nonatomic) long long migrationAttempt;
@property (readonly, nonatomic) NSString *failureReason;
@property (readonly, nonatomic) NSString *coreDataValidationEntityClassName;
@property (readonly, nonatomic) NSString *coreDataValidationAttributeName;
@property (readonly, nonatomic) NSString *localizedErrorDescription;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAutoMigration:(BOOL)a0 isDryRun:(BOOL)a1 migrationSuccessful:(BOOL)a2 totalMigrationTime:(long long)a3 totalMigrationAttempt:(long long)a4 migrationError:(id)a5 failureReason:(id)a6 coreDataValidationEntityClassName:(id)a7 coreDataValidationAttributeName:(id)a8 localizedErrorDescription:(id)a9;

@end
