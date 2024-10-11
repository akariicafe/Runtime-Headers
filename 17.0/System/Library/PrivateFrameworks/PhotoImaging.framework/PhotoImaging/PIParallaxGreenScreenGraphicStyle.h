@class PFParallaxColor;

@interface PIParallaxGreenScreenGraphicStyle : PIParallaxStyle <PIParallaxColorParameterStyle>

@property (retain, nonatomic) PFParallaxColor *color;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)kind;
- (id)parameters;
- (void).cxx_destruct;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (BOOL)hasColorParameter;
- (id)initWithColor:(id)a0 clockColor:(id)a1 colorSuggestions:(id)a2;
- (id)recipeIdentifier;

@end
