@class NSXPCConnection;
@protocol CLSimulationXPCServerInterface;

@interface CLSimulationManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) id<CLSimulationXPCServerInterface> daemonProxy;
@property (nonatomic) unsigned char locationDeliveryBehavior;
@property (nonatomic) double locationDistance;
@property (nonatomic) double locationInterval;
@property (nonatomic) double locationSpeed;
@property (nonatomic) unsigned char locationRepeatBehavior;

- (void)flush;
- (id)scenariosPath;
- (void)loadScenarioFromURL:(id)a0;
- (void)clearSimulatedLocations;
- (void)stopLocationSimulation;
- (void)startLocationSimulation;
- (void)simulateVisit:(id)a0;
- (void)simulateSignificantLocationChange:(id)a0;
- (id)availableScenarios;
- (void)simulateFenceWithBundleID:(id)a0 andFenceID:(id)a1 eventType:(unsigned char)a2 atLocation:(id)a3;
- (void)simulateBeaconWithProximityUUID:(id)a0 major:(long long)a1 minor:(long long)a2 eventType:(unsigned char)a3;
- (id)localizedNameForScenario:(id)a0;
- (void)selectScenario:(id)a0;
- (void)appendSimulatedLocation:(id)a0;
- (void)getFencesForBundleID:(id)a0 withHandler:(id /* block */)a1;
- (void)clearSimulatedCells;
- (void)setSimulatedCell:(id)a0;
- (void)startCellSimulation;
- (void)stopCellSimulation;
- (void)setWifiScanResults:(id)a0;
- (void)setSimulatedCellRegistrationStatus:(BOOL)a0;
- (void)startWifiSimulation;
- (void)stopWifiSimulation;
- (void)setSimulatedWifiPower:(BOOL)a0;
- (id)init;

@end
