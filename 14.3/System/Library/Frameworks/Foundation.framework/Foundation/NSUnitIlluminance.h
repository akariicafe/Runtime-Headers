@interface NSUnitIlluminance : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitIlluminance *lux;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)baseUnit;

@end
