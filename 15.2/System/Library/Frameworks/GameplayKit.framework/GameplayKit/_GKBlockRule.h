@interface _GKBlockRule : GKRule {
    id /* block */ _predicate;
    id /* block */ _action;
}

- (void).cxx_destruct;
- (BOOL)evaluatePredicateWithSystem:(id)a0;
- (void)performActionWithSystem:(id)a0;
- (id)initWithPredicate:(id /* block */)a0 action:(id /* block */)a1;

@end
