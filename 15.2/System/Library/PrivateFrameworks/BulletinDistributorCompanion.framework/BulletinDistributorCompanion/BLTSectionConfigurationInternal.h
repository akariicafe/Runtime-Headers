@class NSDictionary;

@interface BLTSectionConfigurationInternal : NSObject {
    NSDictionary *_configurations;
}

- (void).cxx_destruct;
- (id)init;
- (id)_loadConfigurations;
- (unsigned long long)coordinationTypeForSectionID:(id)a0 subtype:(long long)a1 category:(id)a2;
- (unsigned long long)coordinationTypeForSectionID:(id)a0 subtype:(long long)a1;
- (BOOL)hasSectionIDOptedOutOfAttachmentCoordination:(id)a0;
- (BOOL)shouldSectionIDSettingsAlwaysSync:(id)a0;
- (BOOL)shouldSectionIDAlwaysAlert:(id)a0 category:(id)a1;
- (BOOL)hasSectionIDOptedOutOfWaitForUserIdle:(id)a0;
- (BOOL)hasSectionIDOptedOutOfNotificationTuning:(id)a0;
- (BOOL)hasSectionIDDisplayedCriticalBulletins:(id)a0;
- (BOOL)applyAllowListToChildSections:(id)a0;
- (unsigned long long)legacyMapLocationForSectionID:(id)a0;
- (id)watchVersionThatUsesUserInfoForContextForSectionID:(id)a0;
- (id)additionalBridgeSectionIDsForSectionID:(id)a0;
- (BOOL)hasSectionIDOptedOutOfSubtitleRemovalForOlderWatches:(id)a0;
- (BOOL)shouldUsePhoneExpirationDateForSectionID:(id)a0;
- (BOOL)hasSectionIDOptedOutOfSettingsCoordination:(id)a0;
- (BOOL)setCoordinationType:(unsigned long long)a0 sectionID:(id)a1;
- (id)watchVersionThatUsesAttachmentURLForSectionID:(id)a0;

@end
