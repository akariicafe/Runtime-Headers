@class NSCalendar, NSDictionary, NSMutableDictionary, NSLocale;

@interface CCVegaExpressionFunctions : NSObject {
    NSMutableDictionary *_cache;
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSDictionary *_fontOptions;
}

@property (retain) NSLocale *locale;
@property (retain) NSCalendar *calendar;
@property (retain) NSDictionary *fontOptions;

+ (id)functionNames;

- (void).cxx_destruct;
- (id)init;
- (id /* block */)nativeNumberFormat;
- (id /* block */)nativeDateComponentsFormat;
- (id /* block */)nativeDateFormat;
- (id /* block */)nativeTextMetrics;
- (id /* block */)nativeFontMetrics;
- (id)keyForKind:(id)a0 options:(id)a1;
- (id)makeReturnValue:(id)a0;
- (id)numberFormatterFromOptions:(id)a0;
- (unsigned long long)calendarUnitFromString:(id)a0;
- (id)dateComponentsFormatterFromOptions:(id)a0;
- (unsigned long long)dateFormatterStyleFromString:(id)a0;
- (id)dateFormatterFromOptions:(id)a0;
- (id)fontFromJSFontDesc:(id)a0 options:(id)a1;
- (void)registerFunctionsToClient:(id)a0;

@end
