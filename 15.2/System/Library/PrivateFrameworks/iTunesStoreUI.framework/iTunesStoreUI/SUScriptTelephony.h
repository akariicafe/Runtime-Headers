@class NSString;

@interface SUScriptTelephony : SUScriptObject

@property (readonly, nonatomic, getter=isCellularRoaming) id cellularRoaming;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic, getter=isGreenTea) id greenTea;
@property (readonly, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) NSString *mobileNetworkCode;
@property (readonly, nonatomic) NSString *operatorName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *providerName;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)init;
- (id)attributeKeys;
- (void)dealloc;
- (id)formattedPhoneNumber:(id)a0;
- (id)scriptAttributeKeys;
- (void)_handleOperatorNameChangedNotification:(id)a0;
- (void)_handlePhoneNumberChangedNotification:(id)a0;
- (void)_handleRegistrationChangedNotification:(id)a0;
- (BOOL)_checkIfIsAllowed;
- (id)sendSMSWithBodyText:(id)a0 digits:(id)a1 countryCode:(id)a2;

@end
