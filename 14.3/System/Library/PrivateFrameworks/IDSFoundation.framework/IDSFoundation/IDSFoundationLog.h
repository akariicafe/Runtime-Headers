@class NSObject;
@protocol OS_os_log;

@interface IDSFoundationLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *cloudKit;
@property (class, readonly) NSObject<OS_os_log> *accountIdentity;
@property (class, readonly) NSObject<OS_os_log> *groupCrypto;
@property (class, readonly) NSObject<OS_os_log> *delivery;
@property (class, readonly) NSObject<OS_os_log> *delivery_oversized;
@property (class, readonly) NSObject<OS_os_log> *query;
@property (class, readonly) NSObject<OS_os_log> *UTunPeer;
@property (class, readonly) NSObject<OS_os_log> *UTunConnection;
@property (class, readonly) NSObject<OS_os_log> *localDeliveryQueue;
@property (class, readonly) NSObject<OS_os_log> *socketPairConnection;
@property (class, readonly) NSObject<OS_os_log> *OTRController;
@property (class, readonly) NSObject<OS_os_log> *encryptionController;
@property (class, readonly) NSObject<OS_os_log> *BTLink;
@property (class, readonly) NSObject<OS_os_log> *utunController;
@property (class, readonly) NSObject<OS_os_log> *interface;
@property (class, readonly) NSObject<OS_os_log> *deliveryController;
@property (class, readonly) NSObject<OS_os_log> *opportunistic;
@property (class, readonly) NSObject<OS_os_log> *bonjourDeliveryController;
@property (class, readonly) NSObject<OS_os_log> *utilities;
@property (class, readonly) NSObject<OS_os_log> *IPsecLink;
@property (class, readonly) NSObject<OS_os_log> *xpc;
@property (class, readonly) NSObject<OS_os_log> *IDSSession;
@property (class, readonly) NSObject<OS_os_log> *IDSDSession;
@property (class, readonly) NSObject<OS_os_log> *QRAllocator;
@property (class, readonly) NSObject<OS_os_log> *QRAllocator_oversized;
@property (class, readonly) NSObject<OS_os_log> *Stun;
@property (class, readonly) NSObject<OS_os_log> *GlobalLink;
@property (class, readonly) NSObject<OS_os_log> *FTGL;
@property (class, readonly) NSObject<OS_os_log> *GFTGL;
@property (class, readonly) NSObject<OS_os_log> *NonFTGL;
@property (class, readonly) NSObject<OS_os_log> *SessionController;
@property (class, readonly) NSObject<OS_os_log> *RealTimeEncryptionController;
@property (class, readonly) NSObject<OS_os_log> *IDSMessageStore;
@property (class, readonly) NSObject<OS_os_log> *KeyTransparency;
@property (class, readonly) NSObject<OS_os_log> *CrossLayerLogging;
@property (class, readonly) NSObject<OS_os_log> *IDSUDPLink;
@property (class, readonly) NSObject<OS_os_log> *ConnectivityMonitor;
@property (class, readonly) NSObject<OS_os_log> *TransportLevelAgent;
@property (class, readonly) NSObject<OS_os_log> *Multiplexer;

@end
