@class NSNumber, NSString, NSArray;

@interface SAStockObject : SADomainObject

@property (copy, nonatomic) NSNumber *averageDailyVolume;
@property (copy, nonatomic) NSNumber *change;
@property (copy, nonatomic) NSNumber *changePercent;
@property (copy, nonatomic) NSString *chartData;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *displayStyle;
@property (copy, nonatomic) NSNumber *dividendYield;
@property (copy, nonatomic) NSNumber *earningsPerShare;
@property (copy, nonatomic) NSString *exchange;
@property (copy, nonatomic) NSNumber *fiftyTwoWeekHigh;
@property (copy, nonatomic) NSNumber *fiftyTwoWeekLow;
@property (copy, nonatomic) NSNumber *high;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSNumber *low;
@property (copy, nonatomic) NSString *marketCap;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *open;
@property (copy, nonatomic) NSNumber *peRatio;
@property (copy, nonatomic) NSNumber *prevClose;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *realTimeChange;
@property (copy, nonatomic) NSNumber *realTimeChangePercent;
@property (copy, nonatomic) NSNumber *realTimePrice;
@property (copy, nonatomic) NSNumber *realTimeTS;
@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSArray *stockNews;
@property (copy, nonatomic) NSString *symbol;
@property (copy, nonatomic) NSNumber *timeStamp;
@property (copy, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSString *yearRange;

+ (id)objectWithDictionary:(id)a0 context:(id)a1;
+ (id)object;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
