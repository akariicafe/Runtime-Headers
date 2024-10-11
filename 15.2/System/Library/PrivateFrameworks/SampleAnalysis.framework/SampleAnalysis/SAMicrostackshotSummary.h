@class NSMutableDictionary;

@interface SAMicrostackshotSummary : NSObject {
    NSMutableDictionary *_microstackshotStateCounts;
    unsigned long long _userActiveCount;
    unsigned long long _userIdleCount;
    unsigned long long _onBatteryCount;
    unsigned long long _onACCount;
}

- (void).cxx_destruct;
- (id)init;

@end
