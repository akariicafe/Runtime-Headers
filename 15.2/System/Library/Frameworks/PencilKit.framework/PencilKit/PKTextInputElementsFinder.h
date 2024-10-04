@class NSArray, NSMutableSet;

@interface PKTextInputElementsFinder : NSObject {
    BOOL __currentlyCollectingViews;
    NSArray *_windowsToSearch;
    long long __finderState;
    NSMutableSet *__pendingElementContainerReplies;
    id /* block */ __finderCompletionHandler;
    NSArray *__reusableElements;
    NSMutableSet *__foundElements;
}

- (void).cxx_destruct;

@end
