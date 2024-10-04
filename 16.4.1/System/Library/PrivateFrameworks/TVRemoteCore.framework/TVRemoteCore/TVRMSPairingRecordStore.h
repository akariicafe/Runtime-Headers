@class NSMutableDictionary;

@interface TVRMSPairingRecordStore : NSObject {
    NSMutableDictionary *_pairingRecords;
}

+ (id)sharedRecordStore;

- (void)_synchronizePreferences;
- (id)init;
- (void).cxx_destruct;
- (id)allPairingRecords;
- (id)pairedServiceNetworkNames;
- (id)pairingRecordForServiceWithNetworkName:(id)a0;
- (void)removePairingRecordForServiceWithNetworkName:(id)a0;
- (void)savePairingRecord:(id)a0 forServiceWithNetworkName:(id)a1;

@end
