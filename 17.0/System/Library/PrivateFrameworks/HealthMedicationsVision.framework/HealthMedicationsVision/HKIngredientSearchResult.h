@class NSString;

@interface HKIngredientSearchResult : NSObject

@property (readonly, copy, nonatomic) NSString *ingredientId;
@property (readonly, copy, nonatomic) NSString *ingredientName;
@property (readonly, copy, nonatomic) NSString *strengthQuantity;
@property (readonly, copy, nonatomic) NSString *strengthUnit;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithIngredientId:(id)a0 ingredientName:(id)a1 strengthQuantity:(id)a2 strengthUnit:(id)a3;

@end
