@class NSString, BMSiriPrivateLearningSELFEventStream, BMSource;

@interface SiriAnalyticsBiomeMessageStorageProvider : NSObject <SiriAnalyticsMessageStorage> {
    BMSiriPrivateLearningSELFEventStream *_stream;
    BMSource *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
