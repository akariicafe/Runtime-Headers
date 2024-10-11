@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDConnection : NSObject {
    struct { struct __IOHIDEventSystem *system; struct __CFDictionary *notifications; struct __IOHIDEventQueue *queue; struct __IOMIGMachPort *port; unsigned int reply_port; void /* function */ *demuxCallback; void *demuxRefcon; void /* function */ *terminationCallback; void *terminationRefcon; struct __CFSet *services; int pid; NSObject<OS_dispatch_queue> *dispatchQueue; unsigned int sendPossiblePort; NSObject<OS_dispatch_source> *sendPossibleSource; NSObject<OS_dispatch_source> *replySendPossibleSource; int sendPossible; struct __CFSet *propertySet; struct __CFString *caller; struct __CFString *procName; struct __CFString *uuid; char *uuidStr; int type; struct __CFDictionary *attributes; unsigned int task_name_port; struct { unsigned int val[8]; } audit_token; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } lock; union IOHIDEventSystemConnectionEntitlements)"disableProtectedServices"i"filterPriority"i"state"I"notificationsLock"{os_unfair_lock_s { } *entitlements; int disableProtectedServices; int filterPriority; unsigned int state; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } notificationsLock; struct __CFDictionary *virtualServices; unsigned long long eventFilterMask; unsigned int eventFilteredCount; unsigned int eventFilterTimeoutCount; unsigned int droppedEventCount; unsigned int currentDroppedEventCount; unsigned long long droppedEventTypeMask; unsigned int eventCount; unsigned long long eventMask; struct timeval { long long tv_sec; int tv_usec; } lastDroppedEventTime; struct timeval { long long tv_sec; int tv_usec; } firstDroppedEventTime; unsigned long long maxEventLatency; int droppedEventStatus; unsigned long long propertyChangeNotificationHandlingTime; struct __CFData *eventLog; unsigned int *eventTypeCnt; unsigned int activityState; unsigned int activityStateChangeCount; unsigned long long idleNotificationTime; NSObject<OS_dispatch_source> *activityDispatchSource; struct __IOHIDNotification *activityNotification; struct __CFData *activityLog; struct __IOHIDConnectionFilter *filter; } _connection;
}

- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)description;

@end
