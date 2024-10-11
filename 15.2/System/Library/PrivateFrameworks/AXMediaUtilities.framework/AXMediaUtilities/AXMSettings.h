@class NSMutableDictionary, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface AXMSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_queue_settingObservers;
}

@property (nonatomic) BOOL writeOutInputImages;
@property (nonatomic) BOOL writeOutOCRInputImages;
@property (nonatomic) BOOL writeOutScreenCaptures;
@property (nonatomic) BOOL useANODModelForAXElementVision;

+ (id)settings;

- (void).cxx_destruct;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_queue_removeObserver:(id)a0 forSetting:(id)a1;
- (void)addObserver:(id)a0 forSeetting:(id)a1 withBlock:(id /* block */)a2;
- (void)removeObserver:(id)a0 forSetting:(id)a1;
- (void)removeObserverForAllSettings:(id)a0;
- (BOOL)writeOutInputImages;
- (void)setWriteOutInputImages:(BOOL)a0;
- (BOOL)writeOutOCRInputImages;
- (void)setWriteOutOCRInputImages:(BOOL)a0;
- (BOOL)writeOutScreenCaptures;
- (void)setWriteOutScreenCaptures:(BOOL)a0;
- (BOOL)useANODModelForAXElementVision;
- (void)setUseANODModelForAXElementVision:(BOOL)a0;

@end
