@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPInternetReachability : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct __SCNetworkReachability { } *_reachability;
}

@property (readonly, nonatomic) BOOL hasWifiOrEthernetConnection;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setReachabilityForFlags:(unsigned int)a0 update:(BOOL)a1;

@end
