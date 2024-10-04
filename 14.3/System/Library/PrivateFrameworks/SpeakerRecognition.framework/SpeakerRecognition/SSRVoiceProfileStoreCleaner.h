@interface SSRVoiceProfileStoreCleaner : NSObject

- (id)_cleanupAppDomain:(id)a0;
- (id)_cleanuplanguageCodePath:(id)a0 forAppDomain:(id)a1;
- (id)_cleanupOrphanedMetafilesForProfile:(id)a0 payloadUtteranceLifeTimeInDays:(long long)a1;
- (id)_cleanupImplicitUtteranceCacheForProfile:(id)a0;
- (id)_cleanupContentsOfSatFolder:(id)a0;
- (id)_cleanupOrphanedMetafilesAtURL:(id)a0;
- (id)_cleanupPayloadUtterancesFromProfile:(id)a0 forModelType:(unsigned long long)a1 exceedingLifeTimeInDays:(long long)a2;
- (id)_cleanupInvalidAudioFiles:(id)a0;
- (void)_cleanupModelFilesAtDir:(id)a0 forAssetArray:(id)a1;
- (id)filterDuplicatedSiriProfilesFrom:(id)a0;
- (id)filterInvalidSiriProfilesFrom:(id)a0;
- (id)cleanupProfileStore;
- (void)cleanupInvalidModelsForProfile:(id)a0 withAssetArray:(id)a1;

@end
