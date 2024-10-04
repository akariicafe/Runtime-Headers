@class NSString, SASettingEntity;

@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SASettingEntity *setting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getValueResponse;
+ (id)getValueResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
