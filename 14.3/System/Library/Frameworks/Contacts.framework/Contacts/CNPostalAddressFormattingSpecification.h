@class NSDictionary, NSArray;

@interface CNPostalAddressFormattingSpecification : NSObject

@property (readonly, nonatomic) NSDictionary *fieldLabelMap;
@property (readonly, nonatomic) NSArray *displayFieldArrangement;
@property (readonly, nonatomic) NSArray *editingFieldArrangement;

- (void).cxx_destruct;
- (id)initWithDisplayFieldArrangement:(id)a0 editingFieldArrangement:(id)a1 fieldLabelMap:(id)a2;
- (id)localizedPlaceholderForKey:(id)a0;

@end
