@class NSISEngine, NSMutableArray, NSNumber, NSISLinearExpression;

@interface _NSISLinearExpressionObservable : NSObservationSource {
    NSNumber *_lastValue;
    NSISLinearExpression *_expression;
    NSISEngine *_associatedEngine;
    NSMutableArray *_variableObservations;
    id _changeTransactionObservation;
    BOOL _valueIsDirtied;
}

+ (id)observableForExpression:(id)a0 inEngine:(id)a1;

- (id)addObserver:(id)a0;
- (void)dealloc;
- (BOOL)_overrideUseFastBlockObservers;
- (id)addObserverBlock:(id /* block */)a0;

@end
