@class NSString, NSMutableSet;

@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule> {
    NSMutableSet *_rules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAutoUnlockRule:(id)a0;
- (void)removeAutoUnlockRule:(id)a0;

@end
