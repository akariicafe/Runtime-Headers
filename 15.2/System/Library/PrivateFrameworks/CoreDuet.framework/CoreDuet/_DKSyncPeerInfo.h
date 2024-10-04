@class NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject {
    NSUUID *_uuid;
    _DKSyncPeer *_peer;
    long long _transports;
}

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;

@end
