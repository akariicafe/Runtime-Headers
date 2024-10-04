@class NSString;

@interface QSSMutableServiceDiscoveryRequest : QSSServiceDiscoveryRequest

@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *zk_path;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
