@class VCConnectionHealthMonitor, AVCStatisticsCollector;

@interface AVCRateControlFeedbackController : NSObject {
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
    unsigned int _currentMediaTimestamp;
    unsigned int _outOfOrderCount;
    BOOL _didRegisterPacketReceivedHandler;
    unsigned int _totalECT1Count;
    unsigned int _previousTotalECT1Count;
    unsigned int _totalCECount;
    unsigned int _totalReceivedAudioPackets;
    unsigned int _previousTotalReceivedAudioPackets;
    unsigned int _totalReceivedVideoPackets;
    BOOL _isECNEnabled;
    unsigned char _numBadECNEvents;
    double _feedbackMessageReceivedTime;
    double _lastBadECNEventTime;
}

@property (nonatomic) unsigned int mode;
@property (nonatomic) BOOL isFeedbackReceived;
@property (retain, nonatomic) VCConnectionHealthMonitor *connectionHealthMonitor;

- (void)dealloc;
- (unsigned int)getConnectionStatsBlob;
- (BOOL)getFeedbackMessage:(id *)a0 type:(unsigned int)a1 metaData:(id *)a2 error:(id *)a3;
- (BOOL)getRateControlFeedbackMessage:(id *)a0 type:(unsigned int)a1 metaData:(id *)a2 error:(id *)a3;
- (BOOL)getVCStatisticsFeedbackMessage:(struct tagVCStatisticsMessage { int x0; int x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; double x10; char x11[64]; int x12; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; double x12; double x13; unsigned int x14; unsigned int x15; double x16; unsigned int x17; BOOL x18; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x19; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x20; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x21; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x22; BOOL x23; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; double x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; double x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } x9; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; int x10; unsigned int x11; union { struct { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; float x11; BOOL x12; unsigned short x13; unsigned int x14[6]; } x0; struct { unsigned char x0; short x1; short x2; char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned short x9; unsigned char x10; } x1; } x12; } x10; struct tagVCStatisticsVideoLossFeedback { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x11; } x7; } *)a0 time:(double)a1;
- (id)initWithStatisticsCollector:(id)a0;
- (BOOL)processFeedbackMessage:(id)a0 type:(unsigned int)a1 metaData:(id)a2 error:(id *)a3;
- (BOOL)processRateControlProbingMessage:(struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; })a0 type:(unsigned int)a1 error:(id *)a2;
- (void)resetBurstyLossStatistics;
- (id)translateRateControlDataWithFeedbackMessage:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; double x12; double x13; unsigned int x14; unsigned int x15; double x16; unsigned int x17; BOOL x18; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x19; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x20; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x21; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x22; BOOL x23; })a0;

@end
