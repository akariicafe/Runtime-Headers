@class BRCAccountSession, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCPowerLogReporter : NSObject {
    BRCAccountSession *_session;
    NSMutableDictionary *_deepScanReasonsToReport;
    NSObject<OS_dispatch_source> *_reporterTimer;
    NSObject<OS_dispatch_queue> *_reporterQueue;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)reportDeepScanReason:(id)a0 forAppLibraryID:(id)a1;
- (double)statsReportInterval;
- (void)_reportStats;
- (double)timeUntilNextReport;

@end
