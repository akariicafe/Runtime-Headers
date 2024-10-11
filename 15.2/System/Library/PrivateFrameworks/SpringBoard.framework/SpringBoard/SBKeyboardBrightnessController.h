@class NSString, KeyboardBrightnessClient, SBHIDValueModifyingButtonSetArbiter;
@protocol SBBrightnessRouteCoordinating;

@interface SBKeyboardBrightnessController : NSObject <SBHIDValueModifyingButtonSetArbiterDelegate, SBBrightnessRouteControlling> {
    id<SBBrightnessRouteCoordinating> _coordinator;
    KeyboardBrightnessClient *_keyboardBrightnessClient;
    SBHIDValueModifyingButtonSetArbiter *_buttonArbiter;
}

@property (class, readonly, nonatomic) BOOL handlesKeyCommands;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float brightnessLevel;

- (id)initWithCoordinator:(id)a0;
- (void).cxx_destruct;
- (BOOL)_setBrightnessLevel:(float)a0 animated:(BOOL)a1;
- (float)_currentBrightness;
- (void)buttonSetArbiter:(id)a0 performActionForButtonPage:(unsigned short)a1 usage:(unsigned short)a2;
- (void)buttonSetArbiterDidReset:(id)a0;
- (long long)brightnessRouteType;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { } *)a0;
- (void)cancelBrightnessKeyPressEvent;
- (BOOL)setBrightnessLevel:(float)a0 animated:(BOOL)a1;
- (void)noteValueUpdatesWillBegin;
- (void)noteValueUpdatesDidEnd;

@end
