@class PETScalarEventTracker;

@interface SGMUnknownContactInformationShown : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 app:(struct SGMContactDetailUsedApp_ { unsigned long long x0; })a1 wasSuggestedContact:(struct SGMTypeSafeBool_ { unsigned long long x0; })a2;

@end
