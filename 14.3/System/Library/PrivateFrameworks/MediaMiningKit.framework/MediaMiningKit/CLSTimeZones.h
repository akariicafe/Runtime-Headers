@class NSArray;

@interface CLSTimeZones : NSObject

@property (retain, nonatomic) NSArray *timeZonesDB;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)invalidateCaches;
- (id)timeZoneWithLocation:(id)a0;
- (id)timeZoneWithLocation:(id)a0 countryCode:(id)a1;
- (id)_importDataBaseFromFile:(id)a0;
- (id)closestZoneInfoWithLocation:(id)a0 source:(id)a1;
- (id)filteredTimeZonesWithCountyCode:(id)a0;
- (id)timeZoneWithDictionary:(id)a0;

@end
