@interface FTApgService : OspreyChannel

- (id)performPronGuessWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)performBatchRecoverWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;

@end
