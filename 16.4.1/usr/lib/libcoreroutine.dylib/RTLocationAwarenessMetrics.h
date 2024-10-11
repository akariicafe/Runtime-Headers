@class AWDCoreRoutineLocationAwarenessLocationTimeHistograms, AWDCoreRoutineLocationAwarenessIntervalHistogram, AWDCoreRoutineLocationAwarenessStatistics, NSDate;

@interface RTLocationAwarenessMetrics : NSObject <NSCopying>

@property (readonly, nonatomic) NSDate *startTimestamp;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessStatistics *heartbeatStats;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessLocationTimeHistograms *timeHistograms;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessIntervalHistogram *intervalHistogram;

- (id)initWithStartTimestamp:(id)a0 heartbeatStats:(id)a1 timeHistograms:(id)a2 intervalHistogram:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
