@class NSString, UNNotificationServiceExtension;

@interface _UNNotificationServiceExtensionRemoteContext : _UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionRemoteXPCInterface> {
    struct atomic_flag { _Atomic BOOL _Value; } _hasRepliedFlag;
}

@property (retain, nonatomic) UNNotificationServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)_stageAttachmentsForNotificationContent:(id)a0;
- (void)serviceExtensionTimeWillExpire;
- (void)didReceiveNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)serviceExtensionPerformCleanup;

@end
