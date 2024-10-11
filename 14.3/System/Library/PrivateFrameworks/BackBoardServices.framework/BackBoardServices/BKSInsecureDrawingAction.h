@class NSDictionary, NSArray;

@interface BKSInsecureDrawingAction : BSAction

@property (readonly, nonatomic) NSDictionary *pidToContextInfoDictionary;
@property (readonly, nonatomic) NSArray *processIds;
@property (readonly, nonatomic) NSArray *secureModeViolations;

- (id)initWithPidToContextIdsDictionary:(id)a0;
- (id)initWithSecureModeViolations:(id)a0;
- (id)_initWithPidToContextInfoDictionary:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;

@end
