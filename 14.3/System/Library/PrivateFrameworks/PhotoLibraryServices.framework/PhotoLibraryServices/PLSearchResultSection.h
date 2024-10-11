@class NSArray;

@interface PLSearchResultSection : NSObject

@property (readonly, nonatomic) unsigned long long resultTypes;
@property (readonly, nonatomic) unsigned long long categoryMask;
@property (readonly, nonatomic) NSArray *searchResults;

- (void).cxx_destruct;
- (id)initWithResultTypes:(unsigned long long)a0 categoryMask:(unsigned long long)a1 searchResults:(id)a2;

@end
