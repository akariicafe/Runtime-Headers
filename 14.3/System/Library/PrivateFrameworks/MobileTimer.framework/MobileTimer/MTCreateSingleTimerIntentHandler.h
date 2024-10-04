@class NSString;

@interface MTCreateSingleTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveDurationForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLabelForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)_createTimerWithIntent:(id)a0 dryRun:(BOOL)a1 completion:(id /* block */)a2;
- (id)_responseToCreateTimerIntent:(id)a0 withCreatedTimer:(id)a1 error:(id)a2 dryRun:(BOOL)a3;

@end
