@class NSUUID, NAFuture, HMDHomeWalletKeyAccessoryManager, NSString, HMFMessageDispatcher, HMDDevice, NSMutableSet, NSObject, HMDHome;
@protocol OS_dispatch_queue, HAPSystemKeychainStore, HMDHomeWalletDataSource;

@interface HMDHomeNFCReaderKeyManager : HMFObject <HMFMessageReceiver, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HAPSystemKeychainStore> keychainStore;
@property (readonly, copy) NSUUID *uuid;
@property (weak) HMDHome *home;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDHomeWalletDataSource> dataSource;
@property (readonly) HMDDevice *primaryResidentDevice;
@property (retain) NAFuture *createKeychainItemFuture;
@property (retain) NSMutableSet *keyIdentifiersAlreadyUpdated;
@property (readonly) HMDHomeWalletKeyAccessoryManager *accessoryManager;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)configureWithHome:(id)a0;
- (id)createNFCReaderKeyModelWithHome:(id)a0 nfcReaderKey:(id)a1;
- (void)createReaderKeyKeychainItemForHome:(id)a0 flow:(id)a1 completion:(id /* block */)a2;
- (void)deleteKeychainItemForNFCReaderKeyWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)deleteKeychainItemForNFCReaderKey_flow:(id)a0;
- (void)fetchOrCreateReaderKeyWithRequiresPrivateKey:(BOOL)a0 flow:(id)a1 completion:(id /* block */)a2;
- (void)handleCreateKeychainItemForReaderKeyMessage:(id)a0;
- (void)handleDeleteKeychainItemForNFCReaderKey:(id)a0;
- (void)handleFetchOrCreateReaderKeyMessage:(id)a0;
- (void)handleHomeDidUpdateNFCReaderKeyNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handleSystemKeychainStoreUpdatedNotification:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 keychainStore:(id)a2 dataSource:(id)a3;
- (id)readerKeyWithKeychainItemIdentifier:(id)a0 error:(id *)a1 flow:(id)a2;
- (void)removeKeychainItemForReaderKey:(id)a0 home:(id)a1 flow:(id)a2;
- (void)requestDevice:(id)a0 toCreateKeychainItemForReaderKeyWithFlow:(id)a1 completion:(id /* block */)a2;
- (void)requestPrimaryResidentToFetchOrCreateReaderKeyWithFlow:(id)a0 completion:(id /* block */)a1;

@end
