@class NSArray;

@interface AVSpeechSynthesisProviderAudioUnit : AUAudioUnit

@property (retain, nonatomic) NSArray *speechVoices;
@property (copy, nonatomic) id /* block */ speechSynthesisOutputMetadataBlock;

+ (void)initialize;

- (void)cancelSpeechRequest;
- (void)synthesizeSpeechRequest:(id)a0;

@end
