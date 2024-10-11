@class NSString, AVAudioFile, SNSystemConfiguration;

@interface SNAudioCorrelator : NSObject <SNAnalyzing> {
    SNSystemConfiguration *_systemConfiguration;
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    AVAudioFile *_referenceAudioFile;
    double _referenceSampleRate;
    unsigned int _channelCount;
    unsigned int _framesProcessed;
}

@property (readonly) double overlapFactor;
@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;
- (id)initWithAudioFile:(id)a0 overlapFactor:(double)a1;

@end
