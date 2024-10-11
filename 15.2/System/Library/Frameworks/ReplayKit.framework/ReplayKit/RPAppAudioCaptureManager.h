@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface RPAppAudioCaptureManager : NSObject {
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;
    id /* block */ _appAudioOutputHandler;
    id /* block */ _appTapDidStartHandler;
    struct { struct OpaqueAudioQueue *x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; struct AudioQueueBuffer *x2[10]; struct OpaqueAudioFileID *x3; unsigned int x4; long long x5; int x6; } *_audioRecorderQueue;
    BOOL _resumed;
    NSDate *_lastAudioDate;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioBasicDescription;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAudioPresentationTime;
}

+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescriptionWithStereo:(BOOL)a0;

- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (BOOL)handleStartAudioQueueFailed:(int)a0 didFailHandler:(id /* block */)a1;
- (void)startWithProcessID:(int)a0 outputHandler:(id /* block */)a1 didStartHandler:(id /* block */)a2;
- (void)resumeWithProcessID:(int)a0;

@end
