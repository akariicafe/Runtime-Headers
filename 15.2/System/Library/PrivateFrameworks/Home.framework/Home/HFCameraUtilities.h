@interface HFCameraUtilities : NSObject

+ (BOOL)shouldPurgePosterFrameCache;
+ (BOOL)shouldPurgeVideoFileCache;
+ (BOOL)shouldDisableHeroFrameDownloads;
+ (id)destinationURLForTimelapseVideoFromCameraClip:(id)a0;
+ (BOOL)forceDisplayOfDismissedCameraUpgradeBanner;
+ (double)durationOfRecordingAtURL:(id)a0;
+ (BOOL)eventSpansMultipleDays:(id)a0;
+ (BOOL)isDateToday:(id)a0;
+ (BOOL)_shouldUseTwentyFourHourTime;
+ (id)twentyFourHourTimeStringFromDate:(id)a0;
+ (id)attributedStringFromTwentyFourHourDateString:(id)a0;
+ (id)twelveHourTimeStringFromDate:(id)a0;
+ (id)attributedStringFromDateString:(id)a0;
+ (id)twentyFourHourLiveStringFromDate:(id)a0;
+ (id)liveStringFromDate:(id)a0;
+ (BOOL)hasAcceptedCameraFeedbackEmployeeConsent;
+ (id)percentageOfDurationUntilNextDayForEvent:(id)a0;
+ (double)elapsedTimeSinceMidnightForEvent:(id)a0;
+ (BOOL)shouldDisplayInternalViews;
+ (BOOL)shouldCacheScrubberTimeScale;
+ (void)cacheScrubberTimeScale:(double)a0;
+ (double)cachedScrubberTimeScale;
+ (BOOL)forceDisplaySingleCameraUpgradeBanner;
+ (BOOL)forceDisplayMultiCameraUpgradeBanner;
+ (id)dayStringFromDate:(id)a0;
+ (BOOL)isDateYesterday:(id)a0;
+ (id)attributedFullTimeStringFromDate:(id)a0;
+ (id)attributedShortTimeStringFromDate:(id)a0;
+ (id)localizerKeyDayNameFromDate:(id)a0;
+ (BOOL)shouldDisplayInternalUpgradeViews;
+ (void)toggleDisplayOfInternalUpgradeViews:(BOOL)a0;
+ (BOOL)internalCameraFeedbackSupported;
+ (void)acceptEmployeeCameraFeedbackConsent;
+ (id)cameraFeedbackQueryString;

@end
