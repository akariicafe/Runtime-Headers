@class NSString;

@interface PUEditPluginActionActivity : PUEditPluginActivity

@property (readonly, copy, nonatomic) NSString *internalSystemImageName;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)initWithPlugin:(id)a0 systemImageName:(id)a1;
- (id)_systemImageName;

@end
