@class NSDictionary;

@interface MDDialogTransformer : NSObject

@property (class, retain, nonatomic) NSDictionary *dialogIdentifiers;

+ (id)_analytics;
+ (id)_configurationDictionary;
+ (void)_logModeComputationForAceCommand:(id)a0 mode:(unsigned long long)a1;
+ (unsigned long long)_typeOfAddViews:(id)a0;
+ (id)_transformLegacyAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_transformDialogAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (BOOL)_alwaysPrintSiriResponse;
+ (id)_utteranceViewForDialog:(id)a0 mode:(unsigned long long)a1 printedOnly:(BOOL)a2;
+ (id)_sayItForDialog:(id)a0;
+ (id)_addViewsForAddDialogs:(id)a0 views:(id)a1;
+ (BOOL)_shouldTransformLegacyAddViews;
+ (id)_removeRedundantUtteranceViewsFromAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_removeSpeakableTextFromAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_removeUtteranceViewsFromAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_firstSnippetInViews:(id)a0;
+ (id)_redundantDUCIds;
+ (id)_speakableTextForDialog:(id)a0 mode:(unsigned long long)a1;
+ (id)transformAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)transformAddDialogs:(id)a0 forMode:(unsigned long long)a1;
+ (BOOL)supportsTransformationForAceCommand:(id)a0;

@end
