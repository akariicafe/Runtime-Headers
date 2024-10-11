@class NSString, NSDate;

@interface BLSHBacklightOSTimerProvider : NSObject <BLSHOSTimerProviding>

@property (readonly, nonatomic) unsigned long long mach_continuous_time;
@property (readonly, nonatomic) NSDate *now;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
