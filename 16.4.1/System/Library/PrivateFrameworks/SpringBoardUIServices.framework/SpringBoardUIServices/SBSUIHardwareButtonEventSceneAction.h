@interface SBSUIHardwareButtonEventSceneAction : BSAction

@property (readonly, nonatomic) long long buttonEventType;

- (void)sendResponse:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)initWithButtonEventType:(long long)a0 timeout:(double)a1 withResponseHandler:(id /* block */)a2;

@end
