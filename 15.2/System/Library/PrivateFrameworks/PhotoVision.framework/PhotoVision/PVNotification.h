@class NSString;

@interface PVNotification : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id details;

+ (id)notificationWithName:(id)a0;
+ (id)notificationWithName:(id)a0 details:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 details:(id)a1;

@end
