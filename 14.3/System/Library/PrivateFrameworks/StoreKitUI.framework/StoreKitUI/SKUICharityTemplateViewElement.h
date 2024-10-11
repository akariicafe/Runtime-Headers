@class NSString;

@interface SKUICharityTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSString *campaignIdentifier;
@property (readonly, nonatomic) NSString *charityMetadataURLString;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
