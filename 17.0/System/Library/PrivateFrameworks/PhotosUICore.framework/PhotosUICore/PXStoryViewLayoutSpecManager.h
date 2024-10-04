@protocol PXStoryViewLayoutSpec;

@interface PXStoryViewLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;
@property (nonatomic) unsigned long long storyConfigurationOptions;

- (Class)specClass;
- (id)createSpec;

@end
