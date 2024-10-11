@class NSString;

@interface HKTimePeriodNumberFormatter : NSObject <HKNumberFormatter>

@property (nonatomic) BOOL shouldRoundToHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)a0 displayType:(id)a1 unitController:(id)a2;

@end
