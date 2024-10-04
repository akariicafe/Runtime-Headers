@class NSString;

@interface TIRecentInputs : TILexicon

@property (nonatomic) BOOL needsSync;
@property (retain, nonatomic) NSString *filePath;

+ (id)recentInputAtPath:(id)a0;
+ (void)requestLexiconForRecentInputIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestRemovalOfLexiconForRecentInputIdentifier:(id)a0;
+ (id)_lexiconPathForLocalIdentifier:(id)a0;
+ (void)recentInputForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_sanitizeRecentInputString:(id)a0;
+ (void)storeInput:(id)a0 forLocalIdentifier:(id)a1;
+ (void)storeInput:(id)a0 forSystemIdentifier:(id)a1 atPath:(id)a2;
+ (void)storeInput:(id)a0 forSystemIdentifier:(id)a1;
+ (BOOL)validateInputFormat:(id)a0 forIdentifier:(id)a1;
+ (BOOL)identifierIsSystemIdentifier:(id)a0;
+ (void)clearRecentInputForIdentifier:(id)a0;
+ (void)removeInput:(id)a0 forSystemIdentifier:(id)a1;
+ (id)recentInputForIdentifier:(id)a0;

- (void)storeIfNecessary;
- (id)lexiconByRemovingEntry:(id)a0;
- (id)lexiconWithAdditionalEntry:(id)a0 maximumSize:(long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
