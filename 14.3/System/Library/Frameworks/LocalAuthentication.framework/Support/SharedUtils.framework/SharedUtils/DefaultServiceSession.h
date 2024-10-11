@class NSUUID, NSString;
@protocol Service;

@interface DefaultServiceSession : NSObject <ServiceSession>

@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) id<Service> service;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(id)a0 serviceType:(id)a1 client:(id)a2;

@end
