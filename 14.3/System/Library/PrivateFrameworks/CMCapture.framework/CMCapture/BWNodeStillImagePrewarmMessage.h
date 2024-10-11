@class BWStillImageSettings;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {
    BWStillImageSettings *_stillImageSettings;
}

@property (readonly) BWStillImageSettings *stillImageSettings;

+ (id)newMessageWithStillImageSettings:(id)a0;

- (void)dealloc;
- (id)_initWithStillImageSettings:(id)a0;

@end
