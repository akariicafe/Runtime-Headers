@class _PASRng, SGQuickResponsesStore;

@interface SGQuickResponsesPersonalization : NSObject {
    SGQuickResponsesStore *_store;
    _PASRng *_rng;
}

+ (id)augmentRecords:(id)a0 selectedPseudocounts:(id)a1 config:(id)a2;
+ (id)deduplicatedReplyTextsForReplyPositions:(id)a0 semanticClass:(unsigned long long)a1 responseCount:(unsigned long long)a2 config:(id)a3;

- (void).cxx_destruct;
- (id)init;
- (void)registerDisplayedResponses:(id)a0 config:(id)a1;
- (void)registerSelectedResponse:(id)a0 config:(id)a1;
- (id)initWithStore:(id)a0 withRng:(id)a1;
- (id)replyTextsForSemanticClass:(unsigned long long)a0 responseCount:(unsigned long long)a1 config:(id)a2;
- (id)sortedReplyPositionsForSemanticClass:(unsigned long long)a0 config:(id)a1;
- (void)registerWrittenResponse:(id)a0 config:(id)a1;

@end
