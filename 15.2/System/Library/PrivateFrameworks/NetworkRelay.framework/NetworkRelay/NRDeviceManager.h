@class NSObject;
@protocol OS_dispatch_queue;

@interface NRDeviceManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)copySharedDeviceManager;

- (void)unregisterDevice:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (void)registerDevice:(id)a0 properties:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;
- (void)unregisterAllDevicesWithQueue:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)disableDevice:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (void)enableDevice:(id)a0;
- (void)unregisterDevice:(id)a0;
- (id)copyDeviceListString;
- (void)disableDevice:(id)a0;
- (void)enableDevice:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;

@end
