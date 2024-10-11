@class ClientConnection, NSString;

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator>

@property (readonly, weak, nonatomic) ClientConnection *connection;
@property (readonly) BOOL isFirstPartyCalendarApp;
@property (readonly) BOOL isCalendarDaemon;
@property (readonly) BOOL canModifySuggestedEventCalendar;
@property (readonly) BOOL canMakeSpotlightChanges;
@property (readonly) BOOL canModifyBirthdayCalendar;
@property (readonly) BOOL canModifyCalendarDatabase;
@property (readonly) BOOL testingAccessLevelGranted;
@property (readonly) BOOL internalAccessLevelGranted;
@property (readonly) BOOL storageManagementAccessGranted;
@property (readonly) BOOL hasContactsUIEntitlement;
@property (readonly) BOOL hasMigrationEntitlement;
@property (readonly) BOOL hasSyncClientEntitlement;
@property (readonly) BOOL hasCalendarToolEntitlement;
@property (readonly) BOOL hasChangeIdTrackingOverrideEntitlement;
@property (readonly) BOOL hasNotificationCountEntitlement;
@property (readonly) BOOL hasManagedConfigurationBundleIDOverrideEntitlement;
@property (readonly) BOOL shouldTrustClientEnforcedManagedConfigurationAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithClientConnection:(id)a0;
- (BOOL)_valueForBooleanEntitlement:(id)a0 defaultValue:(BOOL)a1;

@end
