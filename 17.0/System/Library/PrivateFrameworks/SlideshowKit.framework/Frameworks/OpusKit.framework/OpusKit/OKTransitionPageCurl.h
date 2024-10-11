@interface OKTransitionPageCurl : OKTransitionCATransition {
    unsigned long long _direction;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)init;
- (id)initWithSettings:(id)a0;
- (BOOL)needsToBeFront;
- (void)prepareInView:(id)a0;
- (void)setSettingDirection:(unsigned long long)a0;
- (unsigned long long)settingDirection;

@end
