@class NSString, BKSHIDEventSenderDescriptor;

@interface BKHIDAccessibilitySender : NSObject <BKHIDEventSenderInfo>

@property (copy, nonatomic) NSString *displayUUID;
@property (nonatomic) int eventSource;
@property (nonatomic) unsigned long long senderID;
@property (nonatomic) unsigned int primaryUsagePage;
@property (nonatomic) unsigned int primaryUsage;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor;
@property (readonly, nonatomic) BOOL isPencilDigitizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accessibilityHIDServices;

- (void).cxx_destruct;
- (id)senderDescriptorForEventType:(unsigned int)a0;
- (id)initWithSenderID:(unsigned long long)a0;

@end
