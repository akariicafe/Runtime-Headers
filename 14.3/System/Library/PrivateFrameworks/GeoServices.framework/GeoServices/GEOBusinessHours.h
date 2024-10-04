@class NSArray, NSString, GEOPDBusinessHours, NSDate;

@interface GEOBusinessHours : NSObject {
    GEOPDBusinessHours *_hours;
}

@property (readonly, nonatomic) unsigned int openingSoonThresholdInSeconds;
@property (readonly, nonatomic) unsigned int closingSoonThresdholdInSeconds;
@property (readonly, nonatomic) unsigned long long hoursType;
@property (readonly, nonatomic) NSArray *pdHours;
@property (readonly, nonatomic) NSArray *placeDailyHours;
@property (readonly, nonatomic) NSArray *placeDailyNormalizedHours;
@property (readonly, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isBrandTypeHours;

+ (id)prioritizeBusinessHours:(id)a0 compareDate:(id)a1;
+ (void)divideBusinessHoursBasedOnTodaysDate:(id)a0 compareDate:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithGEOPDHours:(id)a0 timeZone:(id)a1;
- (id)initWithGEOPDBusinessHours:(id)a0 timeZone:(id)a1;
- (BOOL)pdHoursAreValid;

@end
