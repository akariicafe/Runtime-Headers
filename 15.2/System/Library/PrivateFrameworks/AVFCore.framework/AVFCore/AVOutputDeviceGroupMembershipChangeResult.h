@class NSString;

@interface AVOutputDeviceGroupMembershipChangeResult : NSObject {
    long long _status;
    NSString *_cancellationReason;
}

@property (readonly) long long status;
@property (readonly) NSString *cancellationReason;

- (id)initWithStatus:(long long)a0 cancellationReason:(id)a1;
- (void)dealloc;

@end
