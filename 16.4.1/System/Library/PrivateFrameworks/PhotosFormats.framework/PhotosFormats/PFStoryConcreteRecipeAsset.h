@class NSString, NSURL;

@interface PFStoryConcreteRecipeAsset : NSObject <PFStoryRecipeAsset>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (BOOL)isEqualToAsset:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 kind:(long long)a1 url:(id)a2;

@end
