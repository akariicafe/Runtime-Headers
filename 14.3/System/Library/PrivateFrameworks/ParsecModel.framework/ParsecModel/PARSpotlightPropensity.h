@class NSDate;

@interface PARSpotlightPropensity : NSManagedObject

@property (nonatomic) short appLaunch;
@property (nonatomic) short onDeviceAddressBookData;
@property (nonatomic) short onDeviceOtherPersonalData;
@property (nonatomic) short other;
@property (nonatomic) short parsec;
@property (nonatomic) short parsecAppStore;
@property (nonatomic) short parsecMaps;
@property (nonatomic) short parsecNews;
@property (nonatomic) short parsecOther;
@property (nonatomic) short parsecStocks;
@property (nonatomic) short parsecWeather;
@property (nonatomic) short parsecWeb;
@property (nonatomic) short parsecWiki;
@property (nonatomic) short punchout;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short siriSuggestions;
@property (nonatomic) short thirdPartyInAppContent;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) short webSuggestions;

+ (id)fetchRequest;

@end
