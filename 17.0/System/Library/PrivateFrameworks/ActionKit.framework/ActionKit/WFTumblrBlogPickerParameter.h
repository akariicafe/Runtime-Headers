@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (retain, nonatomic) WFTumblrAccessResource *tumblrAccessResource;

+ (void)initialize;
+ (id)referencedActionResourceClasses;

- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (void)setActionResources:(id)a0;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)updateBlogs;

@end
