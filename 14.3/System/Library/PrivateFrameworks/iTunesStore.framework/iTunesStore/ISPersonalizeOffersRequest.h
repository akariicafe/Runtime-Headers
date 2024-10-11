@class NSNumber, NSArray, NSMutableDictionary;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {
    NSMutableDictionary *_itemIDsByType;
}

@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (readonly, nonatomic) NSArray *allItemTypes;

- (id)initWithItems:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addItemIdentifier:(id)a0 forItemType:(id)a1;
- (id)itemIdentifiersForItemType:(id)a0;

@end
