@class NSURL;

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (readonly, nonatomic) NSURL *dspGraphURL;
@property (readonly, nonatomic) NSURL *auProcessingStripURL;

- (id)init;
- (BOOL)loadAudioDSPManager;
- (BOOL)loadDSPGraphAtURL:(id)a0 error:(id *)a1;
- (BOOL)loadAudioUnitProcessingStripAtURL:(id)a0 error:(id *)a1;

@end
