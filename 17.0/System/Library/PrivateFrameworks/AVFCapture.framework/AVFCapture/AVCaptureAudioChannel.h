@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {
    AVCaptureAudioChannelInternal *_internal;
}

@property (readonly, nonatomic) float averagePowerLevel;
@property (readonly, nonatomic) float peakHoldLevel;
@property (nonatomic) float volume;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (id)initWithConnection:(id)a0;

@end
