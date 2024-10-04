@class NSDateFormatter, NSCalendar, NSDateComponentsFormatter;

@interface CPSTravelEstimatesStringFormatter : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDateComponentsFormatter *remainingTimeFormatter;
@property (readonly, nonatomic) NSDateFormatter *arrivalTimeFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)generateTravelEstimatesStringsForTravelEstimates:(id)a0;
- (double)_minuteRoundedTimeRemainingForTravelEstimates:(id)a0;

@end
