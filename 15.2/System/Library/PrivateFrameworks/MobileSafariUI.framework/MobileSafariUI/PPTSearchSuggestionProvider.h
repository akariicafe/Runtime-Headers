@class NSTimer, NSString;

@interface PPTSearchSuggestionProvider : SearchSuggestionProvider {
    NSTimer *networkDelaySimulatorTimer;
    NSString *querySimulated;
}

- (void).cxx_destruct;
- (void)setQueryToComplete:(id)a0;
- (id)_generateResultsForQuery:(id)a0;

@end
