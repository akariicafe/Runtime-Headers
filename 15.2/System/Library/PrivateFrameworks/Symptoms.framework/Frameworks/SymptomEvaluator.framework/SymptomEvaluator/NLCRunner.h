@class NSString;

@interface NLCRunner : NSObject {
    struct { int version; int msg_type; struct { int flags; struct { unsigned int family; unsigned int exclude_loopback; char ifname[16]; } net_config; struct { unsigned int bandwidth; int bw_unit; float plr; unsigned int latency; unsigned int qsize; int qsize_unit; unsigned int protocol; unsigned int dst_port; unsigned int src_port; } uplink_config; struct { unsigned int bandwidth; int bw_unit; float plr; unsigned int latency; unsigned int qsize; int qsize_unit; unsigned int protocol; unsigned int dst_port; unsigned int src_port; } downlink_config; } nlc_conditions[2]; } theCommand;
    struct { unsigned int server_local_port; int cookie; } session_cookie;
    BOOL simulationRunning;
}

@property (retain, nonatomic) NSString *interfaceName;

+ (id)sharedInstance;

- (void)engage;
- (void).cxx_destruct;
- (id)init;
- (void)disableDNS;
- (void)enableDNS;
- (void)setUplinkPacketLossRate:(float)a0;
- (void)setDownlinkPacketLossRate:(float)a0;
- (void)disengage;
- (void)modifySimulation;

@end
