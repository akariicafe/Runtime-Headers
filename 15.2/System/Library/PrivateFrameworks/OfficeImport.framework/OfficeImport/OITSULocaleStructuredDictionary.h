@class NSDictionary, NSMutableDictionary, NSLocale;

@interface OITSULocaleStructuredDictionary : NSObject {
    NSDictionary *_dictionary;
    NSMutableDictionary *_cldrLanguageScriptRegionForKey;
    NSMutableDictionary *_cldrLanguageScriptForKey;
    NSMutableDictionary *_workingDictionary;
    NSLocale *_workingLocale;
    BOOL _workingLocaleIsAutoUpdating;
    unsigned long long _autoUpdatingCount;
}

+ (id)dictionaryWithContentsOfFileForLocale:(id)a0 inDirectory:(id)a1 inBundle:(id)a2;
+ (id)dateFormatterSymbolsFallbackDictionary;
+ (id)numberFormatterSymbolsFallbackDictionary;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0 locale:(id)a1;
- (id)initWithDictionary:(id)a0 locale:(id)a1;
- (void)p_remakeWorkingDictionaryWithLocale:(id)a0;
- (BOOL)p_extractLanguage:(id *)a0 script:(id *)a1 region:(id *)a2 fromString:(id)a3;
- (id)p_makeLocaleIdentifierWithLanguage:(id)a0 script:(id)a1 region:(id)a2;

@end
