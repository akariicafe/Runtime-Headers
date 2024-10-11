@class UIColor, HKDateCache, UIFont, CALayer, NSDate;

@interface HKCalendarDayCell : CALayer

@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) CALayer *circle;
@property (readonly, nonatomic) CALayer *dayLabel;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *boldFont;
@property (nonatomic) double dayDiameter;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long dayOfMonth;
@property (readonly, nonatomic) BOOL representsToday;

+ (void)clearImageCache;

- (id)init;
- (void).cxx_destruct;
- (id)_integerNumberFormatter;
- (struct CGSize { double x0; double x1; })circleSize;
- (double)_roundedRectCornerRadius;
- (id)debugDescription;
- (id)_reusedImageForDateIndex:(long long)a0 color:(id)a1;
- (void)layoutOnce;
- (struct CGSize { double x0; double x1; })_roundedRectSizeForDayNumberString:(id)a0;
- (void)updateDateTextForDayNumber:(long long)a0 textColor:(id)a1;
- (id)initWithDateCache:(id)a0;
- (void)updateWithDate:(id)a0 dayOfMonth:(long long)a1;

@end
