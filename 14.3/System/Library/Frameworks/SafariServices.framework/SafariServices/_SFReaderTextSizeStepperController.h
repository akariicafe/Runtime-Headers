@class NSString;
@protocol SFReaderContext;

@interface _SFReaderTextSizeStepperController : NSObject <_SFSettingsAlertStepperController> {
    id<SFReaderContext> _readerContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReaderContext:(id)a0;
- (void)_updateStepperControls:(id)a0;
- (void)prepareStepper:(id)a0;
- (void)incrementValue:(id)a0;
- (void)decrementValue:(id)a0;

@end
