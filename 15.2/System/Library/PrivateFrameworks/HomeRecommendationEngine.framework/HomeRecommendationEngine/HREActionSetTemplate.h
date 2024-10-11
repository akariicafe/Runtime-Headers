@class NSString;
@protocol HFIconDescriptor;

@interface HREActionSetTemplate : HREActionTemplate

@property (retain, nonatomic) NSString *actionSetName;
@property (retain, nonatomic) NSString *actionSetType;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;

- (void).cxx_destruct;
- (id)init;
- (id)createStarterRecommendationInHome:(id)a0;
- (Class)recommendationClass;

@end
