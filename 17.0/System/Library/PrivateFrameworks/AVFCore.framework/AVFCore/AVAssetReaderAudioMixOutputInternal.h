@class NSArray, NSMutableDictionary, AVAudioOutputSettings, AVAudioMix, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject {
    NSArray *audioTracks;
    AVAudioMix *audioMix;
    NSMutableDictionary *audioCurvesForTracks;
    NSMutableDictionary *audioTimePitchAlgorithmsForTracks;
    NSMutableDictionary *audioTapProcessorsForTracks;
    AVAudioOutputSettings *audioOutputSettings;
    NSString *audioTimePitchAlgorithm;
}

@end
