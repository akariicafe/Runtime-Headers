@class EKTravelEngineHypothesis, CADRouteHypothesis, NSString;

@interface CALNSyntheticRouteHypothesizer : NSObject <CALNSyntheticRouteHypothesizerProtocol>

@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property (retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestRefresh;
- (void)stopHypothesizing;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)a0;
- (void)didPostUINotification:(unsigned long long)a0;

@end
