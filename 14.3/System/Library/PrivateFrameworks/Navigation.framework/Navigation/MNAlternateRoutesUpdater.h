@class NSArray, MNActiveRouteInfo, NSMutableArray;

@interface MNAlternateRoutesUpdater : NSObject {
    MNActiveRouteInfo *_mainRoute;
    NSArray *_alternateRoutes;
    NSMutableArray *_trackedAlternateRoutes;
}

@property (readonly, nonatomic) NSArray *alternateRoutes;

- (void).cxx_destruct;
- (BOOL)updateForLocation:(id)a0;
- (BOOL)setAlternateRoutes:(id)a0 forMainRoute:(id)a1;
- (BOOL)updateForReroute:(id)a0 rerouteReason:(unsigned long long)a1;
- (id)alternateRouteForLocation:(id)a0;

@end
