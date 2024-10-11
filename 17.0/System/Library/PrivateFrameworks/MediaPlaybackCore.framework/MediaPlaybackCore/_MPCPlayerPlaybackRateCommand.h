@class NSArray, NSString;

@interface _MPCPlayerPlaybackRateCommand : _MPCPlayerItemCommand <MPCPlayerPlaybackRateCommand>

@property (copy, nonatomic) NSArray *supportedPlaybackRates;
@property (nonatomic) float preferredPlaybackRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)setPlaybackRate:(float)a0;

@end
