@class NSArray;

@interface WBSTabDialog : NSObject {
    id /* block */ _presentationBlock;
    id /* block */ _dismissalBlock;
}

@property (nonatomic) BOOL blocksWebProcessUntilDismissed;
@property (copy, nonatomic) NSArray *cancellationExemptions;

+ (id)tabDialogWithPresentationBlock:(id /* block */)a0 dismissalBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)createInfo;

@end
