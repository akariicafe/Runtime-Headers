@class NSString, NSUUID;

@interface VCConnectionLegacy : VCConnection <VCConnectionProtocol>

@property (readonly) struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *connectionResult;
@property BOOL waitToBeNominated;
@property (readonly) unsigned short relayChannelNumber;
@property (readonly) BOOL isUpgraded;
@property (readonly) BOOL isReplaceOnly;
@property (readonly) BOOL isLocalOnWiFi;
@property (readonly) BOOL isRemoteOnWiFi;
@property (readonly) BOOL isLocalOnCellular;
@property (readonly) BOOL isRemoteOnCellular;
@property (readonly) BOOL isLocalOn5G;
@property (readonly) BOOL isRemoteOn5G;
@property (readonly) BOOL isLocalExpensive;
@property (readonly) BOOL isRemoteExpensive;
@property (readonly) BOOL isLocalConstrained;
@property (readonly) BOOL isRemoteConstrained;
@property (readonly) BOOL isLocalDelegated;
@property (readonly) BOOL isRemoteDelegated;
@property (readonly) BOOL isVirtualRelayLink;
@property (readonly) BOOL isWifiToWifi;
@property (readonly) NSString *localInterfaceName;
@property (readonly) BOOL isIPv6;
@property int connectionMTU;
@property int maxConnectionMTU;
@property (readonly) int connectionId;
@property (readonly) BOOL isRelay;
@property (readonly) BOOL isVPN;
@property (readonly) BOOL isEndToEndLink;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) int localConnectionType;
@property (readonly) int remoteConnectionType;
@property int localCellTech;
@property int remoteCellTech;
@property int priority;
@property (readonly) unsigned int type;
@property (readonly) NSString *localInterfaceTypeString;
@property (readonly) NSString *remoteInterfaceTypeString;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)cellularMTU;
- (id)copy;
- (void)dealloc;
- (id)initWithConnectionResult:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *)a0 type:(unsigned int)a1;
- (id)ipportToString:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; })IPPortForNWConnection:(id)a0;
- (BOOL)isRemoteIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (BOOL)isSameAsConnection:(id)a0;
- (BOOL)isOnSameInterfacesWithConnection:(id)a0;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; int x3; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; } x2; struct { id x0; } x3; } x1; struct tagVCSourceDestinationInfo *x2; void *x3; } *)a0;
- (BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; int x3; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; } x2; struct { id x0; } x3; } x1; struct tagVCSourceDestinationInfo *x2; void *x3; } *)a0;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)a0;
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x0; struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x1; int x2; unsigned short x3; unsigned short x4; unsigned char x5[8]; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; unsigned int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; struct tagCANDIDATEPARIR *x16; } *)a0;
- (BOOL)isLocalIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (BOOL)isOnSameIPPortWithConnection:(id)a0;

@end
