@class NSCondition, OITSULocale, NSMutableArray;

@interface OITSUDateParserLibrary : NSObject {
    OITSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (id)checkoutDateParser;
- (void)returnDateParser:(id)a0;
- (void)prepareDateParserInBackground;

@end
