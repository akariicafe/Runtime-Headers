@class NSString;

@interface VSKeychainItemAttribute : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long attributeType;
@property (copy, nonatomic) NSString *attributeValueClassName;
@property (nonatomic) const struct __CFString { } *secItemAttributeKey;
@property (retain, nonatomic) id defaultValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
