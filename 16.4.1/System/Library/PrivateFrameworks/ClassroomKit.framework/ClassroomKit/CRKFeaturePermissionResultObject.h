@class NSDictionary;

@interface CRKFeaturePermissionResultObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long permission;
@property (nonatomic, getter=isModifiable) BOOL modifiable;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
