@protocol WFSettings;

@interface WFResponseParsingRules : NSObject

@property (readonly, nonatomic) id<WFSettings> settings;

+ (BOOL)aqiEnabledByRules:(id)a0 forLocation:(id)a1;

- (void).cxx_destruct;
- (BOOL)aqiEnabledForCountryCode:(id)a0;
- (id)initWithSettings:(id)a0;

@end
