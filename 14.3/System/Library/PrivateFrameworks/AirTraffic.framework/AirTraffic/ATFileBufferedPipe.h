@class ATFileBuffer, NSFileHandle, NSPipe, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATFileBufferedPipe : NSObject {
    ATFileBuffer *_buffer;
    NSObject<OS_dispatch_queue> *_queue;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readyForData;
    BOOL _readyToClose;
}

@property (readonly, retain) NSFileHandle *fileHandleForReading;
@property (readonly, retain) NSFileHandle *fileHandleForWriting;

+ (id)pipe;

- (id)init;
- (void).cxx_destruct;
- (id)_bufferedWrite:(id)a0;
- (void)_outputReadyForWriting:(unsigned long long)a0;
- (void)_inputReadyForReading:(unsigned long long)a0;

@end
