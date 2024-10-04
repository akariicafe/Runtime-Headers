@class CNInstantMessageAddress;

@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNInstantMessageAddress *imAddress;

+ (id)emptyValueForLabel:(id)a0;

- (id)defaultActionURL;
- (id)displayStringForValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0;
- (id)valueForDisplayString:(id)a0;
- (id)displayLabel;
- (id)editingStringValue;

@end
