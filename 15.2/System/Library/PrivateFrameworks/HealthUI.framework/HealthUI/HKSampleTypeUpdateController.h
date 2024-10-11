@class HKHealthStore, NSMutableDictionary;

@interface HKSampleTypeUpdateController : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_outstandingQueriesByType;
    NSMutableDictionary *_queryStatesByType;
    NSMutableDictionary *_observersByType;
    BOOL _applicationIsInBackground;
}

- (id)initWithHealthStore:(id)a0;
- (void)removeObserver:(id)a0 forType:(id)a1;
- (id)_observersForType:(id)a0;
- (void)_errorRecoveryCallbacksForType:(id)a0;
- (void)_createQueryForType:(id)a0;
- (void)_resumeFailedQueries;
- (void)addObserver:(id)a0 forType:(id)a1;
- (void)_applicationMovingToBackground:(id)a0;
- (id)_allObservedTypes;
- (void)_callObservers:(id)a0 withType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;
- (void)_handleQuerySuccessForType:(id)a0 samplesAdded:(id)a1 objectsRemoved:(id)a2;
- (void)_setQueryState:(long long)a0 forType:(id)a1;
- (void)_handleQueryErrorForType:(id)a0 error:(id)a1;
- (void)_handleHighFrequencyObserverCallbacksForType:(id)a0;
- (void)_applicationMovingToForeground:(id)a0;
- (id)_failedQuerySampleTypes;
- (void)_removeQueryForType:(id)a0 queryState:(long long)a1;
- (void).cxx_destruct;
- (void)_handleQueryCallbackForType:(id)a0 samplesAdded:(id)a1 objectsDeleted:(id)a2 error:(id)a3;
- (long long)_queryStateForType:(id)a0;
- (BOOL)isQueryStateRunningForType:(id)a0;
- (BOOL)_typeRequiresNewQuery:(id)a0;
- (BOOL)_isHighFrequencyDataType:(id)a0;

@end
