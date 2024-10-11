@class NSString, SGTokenizerMappingTransformer, SGNameMappingTransformer;

@interface SGNameDetector : NSObject {
    SGTokenizerMappingTransformer *_noCoreNLPTokenizer;
    SGTokenizerMappingTransformer *_coreNLPTokenizer;
    NSString *_language;
    SGNameMappingTransformer *_transformer;
}

+ (id)_contactNames;
+ (id)_fetchContactNamesToLimit:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id)tokenizerWithCoreNLPEnabled:(BOOL)a0;
- (id)detectNames:(id)a0 algorithm:(unsigned long long)a1;
- (id)_detectNames:(id)a0 withNameSet:(id)a1;
- (id)detectNames:(id)a0 withNameSet:(id)a1;
- (id)_detectContactNames:(id)a0;
- (id)_detectNLPNames:(id)a0;

@end
