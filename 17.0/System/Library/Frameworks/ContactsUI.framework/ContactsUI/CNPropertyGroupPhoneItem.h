@class CNPhoneNumber;

@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNPhoneNumber *phoneNumber;

+ (id)emptyValueForLabel:(id)a0;

- (id)defaultActionURL;
- (id)normalizedValue;
- (id)bestLabel:(id)a0;
- (id)displayStringForValue:(id)a0;
- (id)valueForDisplayString:(id)a0;

@end
