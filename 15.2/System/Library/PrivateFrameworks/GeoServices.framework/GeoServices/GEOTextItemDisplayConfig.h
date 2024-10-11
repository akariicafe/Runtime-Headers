@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig>

@property (readonly, nonatomic) unsigned int maxItemsPerRow;
@property (readonly, nonatomic) unsigned int maxRowCount;

- (id)initWithMaxItemsPerRow:(unsigned int)a0 maxRowCount:(unsigned int)a1;
- (id)initWithTextItemDisplayConfig:(id)a0;
- (id)init;

@end
