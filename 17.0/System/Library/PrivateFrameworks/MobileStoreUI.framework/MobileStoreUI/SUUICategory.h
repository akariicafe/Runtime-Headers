@class NSArray, NSString, NSURL;
@protocol SUUIArtworkProviding;

@interface SUUICategory : NSObject

@property (readonly, nonatomic) id<SUUIArtworkProviding> artworkProvider;
@property (readonly, nonatomic) long long categoryIdentifier;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *parentLabel;

- (void).cxx_destruct;
- (BOOL)containsURL:(id)a0;
- (id)initWithCategoryDictionary:(id)a0;
- (id)subcategoryContainingURL:(id)a0;

@end
