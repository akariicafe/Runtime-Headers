@class CLSNowPlayingStreamEventMetadata, NSDate;

@interface CLSNowPlayingStreamEvent : NSObject

@property (readonly, copy, nonatomic) CLSNowPlayingStreamEventMetadata *metadata;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;

+ (id)playbackStreamEventDateSortDescriptors;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDuetKnowledgeEvent:(id)a0;

@end
