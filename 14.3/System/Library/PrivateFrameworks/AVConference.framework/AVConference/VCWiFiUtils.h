@interface VCWiFiUtils : NSObject

+ (BOOL)getInfraChannelNumber:(int *)a0 is5Ghz:(BOOL *)a1;
+ (BOOL)copyAWDLChannelSequence:(id *)a0 twoPtFourGhzChannelCount:(int *)a1 fiveGhzChannelCount:(int *)a2 dfsChannelCount:(int *)a3 inactiveSlotCount:(int *)a4;

@end
