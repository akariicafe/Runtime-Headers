@class SKUIViewElementText;

@interface SKUITomatoRatingViewElement : SKUIViewElement

@property (readonly, nonatomic) long long freshness;
@property (readonly, nonatomic) float tomatoRating;
@property (readonly, nonatomic) SKUIViewElementText *ratingText;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
