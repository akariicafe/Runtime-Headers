@class VCMediaStreamConfig, AVCBasebandCongestionDetector;

@interface VCMediaStreamTransport : NSObject {
    unsigned int _localSSRC;
    BOOL _isSRTPInitialized;
    int _payloadType;
    struct { void *context; void /* function */ *creationCallback; BOOL isReceiveExternallyScheduled; } _transportStreamInfo;
}

@property (readonly, nonatomic) VCMediaStreamConfig *streamConfig;
@property (readonly, nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (readonly, nonatomic) unsigned short idsStreamId;
@property (readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property (readonly, nonatomic, getter=isRTCPSendEnabled) BOOL rtcpSendEnabled;
@property (readonly, nonatomic) BOOL encryptionInfoReceived;
@property (nonatomic) long long streamDirection;
@property (nonatomic) double rtpTimeoutInterval;
@property (nonatomic, getter=isRTPTimeoutEnabled) BOOL rtpTimeoutEnabled;
@property (nonatomic) double decryptionMKMRecoveryInterval;
@property (nonatomic) double decryptionTimeoutInterval;
@property (nonatomic, getter=isDecryptionTimeoutEnabled) BOOL decryptionTimeoutEnabled;
@property (nonatomic) double rtcpTimeoutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTCPTimeoutEnabled) BOOL rtcpTimeoutEnabled;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (readonly, nonatomic) struct tagVCCryptor { } *receiverSframeCryptor;
@property (readonly, nonatomic) struct tagVCCryptor { } *transmitterSframeCryptor;

+ (BOOL)isSameSRTPKey:(id)a0 newKey:(id)a1;
+ (int)getSRTPMediaKeyLength:(long long)a0;
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)a0;

- (void)onStop;
- (int)onStart;
- (void)dealloc;
- (void)reset;
- (BOOL)configureWithStreamConfig:(id)a0 setupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a1 reducedSizeRTCPPackets:(BOOL)a2 hopByHopEncryptRTCPPackets:(BOOL)a3 statisticsCollector:(id)a4 basebandCongestionDetector:(id)a5 error:(id *)a6;
- (void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS { unsigned int x0; int x1; char *x2; unsigned long long x3; unsigned char x4; unsigned short *x5; int x6; unsigned short x7; unsigned short x8; unsigned int x9; struct _RTCP_RECEPTION_REPORT *x10; unsigned char x11; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO *x12; unsigned short x13[12]; unsigned char x14; BOOL x15; unsigned long long x16; } *)a0;
- (void)resetPayloadMapping;
- (void)handleEncryptionInfoChange:(id)a0;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)a0;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)a0;
- (BOOL)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (id)initWithHandle:(struct tagHANDLE { int x0; } *)a0 localSSRC:(unsigned int)a1;
- (BOOL)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; } *)a0 reportCount:(char *)a1;
- (BOOL)sendIntervalDidElapse:(int *)a0 remainingTime:(double *)a1;
- (BOOL)isSendingMedia:(id)a0;
- (int)setupRTPWithTransportStreams;
- (void)updateLastGeneratedKeyMaterial;
- (BOOL)isSameSRTPConfig:(id)a0;
- (BOOL)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (int)setupSRTP;
- (BOOL)setupSframeCryptorsWithError:(id *)a0;
- (void)registerRTPPayloadMappings;
- (id)rxNetworkPayloads;
- (struct tagVCCryptor { } *)createSframeCryptorWithStreamConfig:(id)a0 ssrc:(unsigned int)a1 error:(id *)a2;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } *)a0 withMediaKey:(id)a1;
- (BOOL)setupRTPForIDS:(id *)a0;
- (BOOL)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (BOOL)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (BOOL)setThrottlingInterval:(double)a0;

@end
