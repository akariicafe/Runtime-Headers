@class NSString, CNHandleStringClassifier;

@interface _CNAPeopleSuggesterResultPrioritizer : NSObject <CNAutocompleteSuggestedResultPrioritization> {
    CNHandleStringClassifier *_handleStringClassifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)bundleIdentifierOfCurrentProcess;
+ (id)makeBundleIdentifierOfCurrentProcess;

- (void).cxx_destruct;
- (id)init;
- (id)applyPriorityOrderToResults:(id)a0 fetchRequest:(id)a1 andCompletePriorityResultsPromise:(id)a2;
- (id)partitionCandidatesForRanking:(id)a0 givenPrefix:(id)a1;
- (BOOL)resultIdentifierIsValidMessagesChatGuid:(id)a0;
- (id)messagesGroupResultForSuggestion:(id)a0;
- (id)identifierForGroupResultSuggestion:(id)a0;
- (long long)addressTypeForHandle:(id)a0;
- (BOOL)resultMatchesPrefix:(id)a0 inNameComponentsOfResult:(id)a1;

@end
