@class NSFormatter;

@interface TSKRulerUnits : NSObject {
    NSFormatter *_formatter;
    NSFormatter *_lenientFormatter;
    NSFormatter *_highPrecisionFormatter;
    NSFormatter *_lenientHighPrecisionFormatter;
}

@property (nonatomic) int rulerUnits;
@property (nonatomic) BOOL showRulerAsPercentage;
@property (nonatomic) BOOL centerRulerOrigin;
@property (nonatomic) int preferredPixelUnit;

+ (id)instance;
+ (id)formatterForRulerUnits:(int)a0 decimalPlaces:(int)a1 trailingZeros:(BOOL)a2 lenient:(BOOL)a3;

- (void).cxx_destruct;
- (id)init;
- (double)convertRulerUnitsToPoints:(double)a0;
- (double)convertPointsToRulerUnits:(double)a0;
- (id)formatter:(BOOL)a0 lenient:(BOOL)a1;
- (id)compatibleRulerUnits;
- (id)localizedCompatibleRulerUnits;
- (id)localizedCompatibleRulerAbbreviatedUnits;

@end
