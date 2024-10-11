@class NSUUID, NSObject, CAXSuggestionProvider;
@protocol OS_dispatch_queue;

@interface WFContextualActionSuggester : NSObject

@property (readonly, nonatomic) NSUUID *lastSuggestionSessionUUID;
@property (readonly, nonatomic) CAXSuggestionProvider *provider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (void)suggestActionsForContext:(id)a0 numSuggestions:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)shouldShowInitialSuggestionsForContext:(id)a0;
- (id)initialSuggestionsForContextIfApplicable:(id)a0 numSuggestions:(unsigned long long)a1;
- (void)reportEvent:(unsigned long long)a0 inContext:(id)a1 involvingActions:(id)a2;

@end
