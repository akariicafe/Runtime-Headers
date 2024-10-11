@class NSString, RTRoutineManager;

@interface RTCoreRoutineAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    RTRoutineManager *_routineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
