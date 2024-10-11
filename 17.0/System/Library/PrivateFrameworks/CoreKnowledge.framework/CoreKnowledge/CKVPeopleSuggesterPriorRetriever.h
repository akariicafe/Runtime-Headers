@class NSString, _PSContactSuggester;

@interface CKVPeopleSuggesterPriorRetriever : NSObject <CKVPriorRetriever> {
    _PSContactSuggester *_contactSuggester;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_convertPeopleSuggesterPriorToPriorInfo:(id)a0;
- (id)_fetchContactPriorsForContactIds:(id)a0;
- (id)allPriorInfoWithThreshold:(unsigned int)a0;
- (id)priorInfoForItemIds:(id)a0;

@end
