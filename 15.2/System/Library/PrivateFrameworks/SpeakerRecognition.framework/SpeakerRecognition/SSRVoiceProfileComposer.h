@interface SSRVoiceProfileComposer : NSObject

+ (id)sharedTrainer;

- (BOOL)addUtterance:(id)a0 toProfile:(id)a1 withAsset:(id)a2;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1;

@end
