@class HSModel, FirmwareBundle, NSObject, NSMutableData;
@protocol OS_dispatch_queue, iAUPServerDelegate;

@interface iAUPServer : NSObject <HSModelDelegate> {
    BOOL _escapeInProgress;
    HSModel *_hsModel;
    unsigned int _telegramLength;
    unsigned char _telegramChecksum;
    NSMutableData *_telegramDataIn;
    unsigned short objectBlockTransferSizes[4];
    unsigned int _firmwareImageBaseTransferAddress;
    unsigned short _accessoryCapabilities;
    unsigned int _totalBytesDownloadedInCurrentSession;
    BOOL _startEventSent;
}

@property id<iAUPServerDelegate> delegate;
@property (retain, nonatomic) FirmwareBundle *firmwareBundle;
@property (nonatomic) BOOL byteEscape;
@property (nonatomic) BOOL ackAppReentry;
@property (nonatomic) int serverState;
@property (nonatomic) int parserState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQ;
@property (nonatomic) unsigned char iAUPVersion;
@property (nonatomic) unsigned char currentAsset;
@property (readonly, nonatomic) BOOL restartRequired;
@property (readonly, nonatomic) BOOL sleepWakeRequired;
@property (readonly, nonatomic) BOOL urgentUpdate;

- (void)dealloc;
- (void)appendToLog:(id)a0;
- (void)setHSModel:(id)a0 fallbackModel:(id)a1 error:(id)a2;
- (void)resetParser;
- (char *)serverStateString:(int)a0;
- (char *)parserStateString:(int)a0;
- (char *)commandString:(int)a0;
- (void)processInByte:(unsigned char)a0;
- (void)processInTelegram;
- (void)logCommand:(unsigned char)a0 payload:(char *)a1 length:(unsigned int)a2;
- (void)processPersonalizationInfo:(char *)a0 length:(unsigned int)a1;
- (id)sendCommand:(unsigned char)a0 payload:(char *)a1 payload_length:(unsigned short)a2;
- (void)setResumeInfo:(char *)a0 length:(unsigned int)a1;
- (void)processIdentifyCommand:(char *)a0 length:(unsigned int)a1;
- (void)processRequestDownloadCommand:(char *)a0 length:(unsigned int)a1;
- (void)processDownloadCompleteCommand:(char *)a0 length:(unsigned int)a1;
- (void)processNotifyAccessoryErrorCommand:(char *)a0 length:(unsigned int)a1;
- (unsigned char)appendByteWithEscaping:(unsigned char)a0 toObject:(id *)a1;
- (id)processManifestProperties:(char *)a0 length:(unsigned int)a1;
- (id)initInstanceWithByteEscape:(BOOL)a0;
- (id)getNumberOfBytesDownloadedInCurrentSession;
- (unsigned int)supportedTargetProductIDCode;
- (void)processDataFromAccessory:(id)a0;
- (void)setBootloaderEntry;
- (BOOL)personalizationComplete;
- (char *)assetTypeString:(int)a0;

@end
