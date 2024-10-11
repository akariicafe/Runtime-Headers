@interface CLSNowPlayingStreamConverter : NSObject

@property (class, readonly, nonatomic) unsigned long long defaultOptions;

@property (nonatomic) unsigned long long options;

+ (id)recognizedMusicSources;

- (id)init;
- (id)eventsFromDuetKnowledgeEvents:(id)a0;
- (id)eventFromDuetKnoweledgeEvent:(id)a0;
- (BOOL)_canUseEvent:(id)a0;

@end
