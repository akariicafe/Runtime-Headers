@class NSString;

@interface SGPseudoReminderKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)initWithSerialized:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroupId:(id)a0;
- (BOOL)isEqualToPseudoReminderKey:(id)a0;

@end
