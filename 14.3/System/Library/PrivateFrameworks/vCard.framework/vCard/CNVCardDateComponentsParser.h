@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject {
    CNVCardDateComponentsFormatter *_formatter;
    NSCalendar *_gregorianCalendar;
}

- (id)init;
- (void).cxx_destruct;
- (id)gregorianDateComponentsWithParser:(id)a0;
- (id)dateComponentsWithParser:(id)a0;
- (id)dateComponentsFromString:(id)a0 omitYear:(long long)a1;
- (id)dateComponentsFromString:(id)a0 calendarIdentifier:(id)a1;

@end
