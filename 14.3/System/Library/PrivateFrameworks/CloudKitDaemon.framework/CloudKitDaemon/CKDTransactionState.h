@class CKDAssetBatch, NSMutableDictionary;

@interface CKDTransactionState : NSObject

@property (retain, nonatomic) CKDAssetBatch *assetBatch;
@property (retain, nonatomic) NSMutableDictionary *itemByAssetId;

- (id)init;
- (void).cxx_destruct;

@end
