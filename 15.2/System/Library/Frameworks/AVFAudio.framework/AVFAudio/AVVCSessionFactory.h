@class AVVCSessionManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVVCSessionFactory : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *sessionManagerMap;
@property (retain, nonatomic) AVVCSessionManager *primarySessionManager;
@property (copy, nonatomic) id /* block */ sessionWasCreatedBlock;
@property (copy, nonatomic) id /* block */ sessionWillBeDestroyedBlock;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (oneway void)release;
- (id)sessionForContext:(id)a0 error:(id *)a1;
- (void)_wqCreateAuxSessionAndManagerForDeviceUID:(id)a0 clientType:(long long)a1 session:(id *)a2 manager:(id *)a3 error:(id *)a4;
- (id)_wqCreatePrimarySessionManagerIfNeeded:(id)a0 clientType:(long long)a1 error:(id *)a2;
- (void)_wqSessionAndManagerForContext:(id)a0 clientType:(long long)a1 session:(id *)a2 manager:(id *)a3 error:(id *)a4;
- (void)sessionForContext:(id)a0 completion:(id /* block */)a1;
- (void)sessionForContext:(id)a0 clientType:(long long)a1 completion:(id /* block */)a2;
- (id)sessionForContext:(id)a0 clientType:(long long)a1 error:(id *)a2;
- (void)sessionManagerForContext:(id)a0 clientType:(long long)a1 completion:(id /* block */)a2;
- (id)sessionManagerForContext:(id)a0 clientType:(long long)a1 error:(id *)a2;
- (void)cleanupContext:(id)a0;
- (id)auxSessionManagers;
- (void)releasePrimarySessionManager;

@end
