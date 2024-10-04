@class NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBKeyboardPreferencesManager : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_preferences;
}

+ (id)sharedInstance;
+ (BOOL)setPreference:(id)a0 forKey:(id)a1;
+ (id)copyPreferenceForKey:(id)a0;
+ (BOOL)setIntPreference:(int)a0 forKey:(id)a1;
+ (BOOL)setFloatPreference:(float)a0 forKey:(id)a1;
+ (BOOL)setBoolPreference:(BOOL)a0 forKey:(id)a1;
+ (BOOL)getIntPreference:(int *)a0 forKey:(id)a1;
+ (BOOL)getFloatPreference:(float *)a0 forKey:(id)a1;
+ (BOOL)getBoolPreference:(BOOL *)a0 forKey:(id)a1;
+ (id)copyPreferenceForKey:(id)a0 keyboardID:(unsigned long long)a1;
+ (id)copyAllPreferences;

- (id)init;
- (void)dealloc;
- (BOOL)setPreference:(id)a0 forKey:(id)a1;
- (id)copyPreferenceForKey:(id)a0;
- (id)copyAllPrefereneces;

@end
