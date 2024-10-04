@class NSMutableSet;

@interface Li3DEngineSceneManager : NSObject

@property (readonly, nonatomic) NSMutableSet *appliedForces;

- (id)init;
- (BOOL)hasAppliedForce:(id)a0;
- (void)resetSim;
- (BOOL)applyForce:(const void *)a0 node:(id)a1 arScale:(float)a2 objects:(void *)a3;

@end
