@class NSString, GEOStyleAttributes;

@interface GEOCategorySearchResultSection : NSObject

@property (nonatomic) long long cellType;
@property (copy, nonatomic) NSString *headerDisplayName;
@property (copy, nonatomic) NSString *subHeaderDisplayName;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCategorySearchResultSection:(id)a0;

@end
