@class NSArray, NSString;

@interface MTHLSItem : NSObject <MTMediaPlaylistItem>

@property (nonatomic) unsigned long long startOverallPosition;
@property (nonatomic) unsigned long long startPosition;
@property (retain, nonatomic) NSArray *eventData;
@property (readonly, nonatomic) unsigned long long overallPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)comparator;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithStartOverallPosition:(unsigned long long)a0 metricsData:(id)a1;

@end
