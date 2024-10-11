@class NSString, NSArray;

@interface ATXFakeModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    NSArray *_modeEvents;
    BOOL _wasInitializedWithoutEntity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (BOOL)isEventFromProvider:(id)a0;
- (BOOL)publisherIsCoreDuetWrapper;
- (id)dateIntervalFromEvent:(id)a0;
- (id)eventsFromPublisher;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(BOOL)a2;
- (id)initWithModeEvents:(id)a0 expectsNilEntity:(BOOL)a1;
- (id)initWithEventDateIntervals:(id)a0;

@end
