@interface NTKBatteryUtilities : NSObject

+ (id)colorForLevel:(float)a0 andState:(long long)a1;
+ (id)modularRingColorForLevel:(float)a0;
+ (id)chargingStringForState:(long long)a0 longText:(BOOL)a1;
+ (BOOL)chargingForState:(long long)a0;
+ (id)chargingStringForState:(long long)a0;

@end
