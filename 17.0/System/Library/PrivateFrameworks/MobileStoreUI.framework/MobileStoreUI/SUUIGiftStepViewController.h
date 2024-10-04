@class NSOperationQueue, SUUIGift, SSVLoadURLOperation, SUUIGiftConfiguration;

@interface SUUIGiftStepViewController : UIViewController {
    SSVLoadURLOperation *_loadOperation;
}

@property (readonly, nonatomic) SUUIGift *gift;
@property (readonly, nonatomic) SUUIGiftConfiguration *giftConfiguration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)_finishImageLoadWithImage:(id)a0 error:(id)a1 block:(id /* block */)a2;
- (void)finishGiftingWithResult:(BOOL)a0;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)loadItemArtworkWithArtworkContext:(id)a0 completionBlock:(id /* block */)a1;

@end
