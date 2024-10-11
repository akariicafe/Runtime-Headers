@interface MXMMachUtils : NSObject

+ (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)_timebase;
+ (id)_processNameWithBundleIdentifier:(id)a0;
+ (double)_nanosecondsWithAbsoluteTime:(unsigned long long)a0;
+ (double)_nanosecondsWithContinuousTime:(unsigned long long)a0;
+ (unsigned long long)_absoluteTimeWithNanoseconds:(double)a0;

@end
