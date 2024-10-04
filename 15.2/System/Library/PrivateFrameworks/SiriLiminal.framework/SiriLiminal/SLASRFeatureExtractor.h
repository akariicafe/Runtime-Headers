@interface SLASRFeatureExtractor : NSObject

+ (id)_getTokenConfidenceForPath:(id)a0 fromPhrases:(id)a1;
+ (id)_getLastTokenForPath:(id)a0 fromPhrases:(id)a1;
+ (id)extractASRFaturesFrom:(id)a0;
+ (id)extractLRNNFaturesFrom:(id)a0;

@end
