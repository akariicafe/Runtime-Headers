@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject

@property (readonly, nonatomic) PSYSyncSession *originalSession;
@property (readonly, nonatomic) PSYSyncSession *updatedSession;

- (void).cxx_destruct;
- (void)enumerateChangedActivitiesWithBlock:(id /* block */)a0;
- (id)initWithOriginalSession:(id)a0 updatedSession:(id)a1;
- (void)enumerateNewlyRunningActivitiesWithBlock:(id /* block */)a0;
- (void)enumerateNewlyCompletedActivitiesWithBlock:(id /* block */)a0;
- (BOOL)didUpdateCompleteSyncSession;

@end
