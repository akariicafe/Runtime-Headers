@class NSString;

@interface VCVideoStreamOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol> {
    double _rampUpFrozenDuration;
    unsigned short _currentTierIndex;
    long long _rampUpStatus;
    double _rampDownLossEventBitrateThreshold;
    double _packetLossRate;
    double _packetLossRateVideo;
    double _roundTripTime;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousTimestampDiff;
    int _sendTimestampWrappedAround;
    BOOL _lossEventBuffer[4];
    int _lossEventBufferIndex;
    double _lastLossEventTime;
    double _rampUpFrozenTime;
    double _rampDownOWRDThreshold;
    double _rampDownLossRateThreshold;
    double _rampDownLossEventCountThreshold;
    double _rampUpNoLossEventDurationRatio;
    double _rampUpStatusRateLimitedThreshold;
    double _rateControlTime;
    unsigned int _averageReceivedBitrate;
    unsigned short _minTierIndex;
    unsigned short _maxTierIndex;
}

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) unsigned int targetBitrate;
@property (readonly, nonatomic) double owrd;
@property (readonly, nonatomic) double nowrd;
@property (readonly, nonatomic) double nowrdShort;
@property (readonly, nonatomic) double nowrdAcc;
@property (nonatomic) double rateControlInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)className;
- (void)setMaxTierIndex:(unsigned short)a0 minTierIndex:(unsigned short)a1;
- (void)updatePacketLossRate:(double)a0 time:(double)a1;
- (BOOL)shouldRampDown;
- (unsigned short)rampDownTier;
- (void)stateChange:(int)a0;
- (BOOL)shouldRampUp;
- (unsigned short)rampUpTier;
- (void)calculateOWRDWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2;
- (void)stateExit;
- (void)stateEnter;
- (int)lossEventCount;
- (int)lossEventCountThresholdForBitrate:(unsigned int)a0;
- (void)resetLossEventBuffer;
- (void)doRateControlWithTime:(double)a0 roundTripTime:(double)a1 packetLossRate:(double)a2 operatingTierIndex:(unsigned short)a3 averageReceivedBitrate:(unsigned int)a4;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2;
- (void)printRateControlFullInfoWithLogDump:(void *)a0 time:(double)a1 videoStall:(BOOL)a2 videoFrozenDuration:(double)a3 averageTargetBitrate:(unsigned int)a4;

@end
