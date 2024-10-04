@class NSURL;

@interface PPLMutablePeopleEntitySceneSettings : UIMutableApplicationSceneSettings

@property (retain, nonatomic) NSURL *url;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
