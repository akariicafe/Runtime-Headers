@interface UIApplicationAuditIssuesAccessibility : NSObject

+ (id)_axAuditFindAllTablesInHierarchyForView:(id)a0;
+ (id)_axAuditFindAllCollectionViewsInHierarchyForView:(id)a0;
+ (id)_axAuditFindAllTablesInHierarchyForElements:(id)a0;
+ (id)_axAuditFindAllCollectionViewsInHierarchyForElements:(id)a0;
+ (id)_axAuditGetFontAttrFromAttributedString:(id)a0;
+ (id)_axAuditGetTextFromObject:(id)a0;
+ (id)_axAuditGetAllFontSizes;
+ (id)_axAuditGetFontForElement:(id)a0;
+ (BOOL)_axAuditElementIsClipping:(id)a0;
+ (BOOL)_axAuditShouldElementBeCheckedForClipping:(id)a0;
+ (id)_axAuditGetIndexPathsDictionaryForCaptureActionForView:(id)a0;
+ (id)_axAuditGetIndexPathsDictionaryForUpdateActionForView:(id)a0;
+ (id)_axAuditGetOriginalContentOffsetForView:(id)a0;
+ (id)_axAuditGetAllTableAndCollectionViewsForHierarchy:(id)a0;
+ (id)_axAuditHelperToFindRelevantSubviewsOfCellView:(id)a0;
+ (id)_axAuditCreateElementInfoDictionariesForSubviews:(id)a0;
+ (void)_axAuditForHierarchy:(id)a0 withTableOrCollectionViews:(id)a1 performAction:(id)a2 performBlockOnEachCell:(id /* block */)a3;
+ (id)_axAuditMatchReferenceSubviews:(id)a0 againstNewSubviews:(id)a1;
+ (void)_axAuditUpdateFontsForReferenceMatches:(id)a0 forFontSize:(id)a1;
+ (void)_axAuditUpdateClippingStatusForReferenceMatches:(id)a0;
+ (void)_axAuditStoreFontsIntoDictionary:(id)a0 forReferenceMatches:(id)a1;
+ (void)_axAuditStoreClippedElementsIntoSet:(id)a0 forReferenceMatches:(id)a1;
+ (BOOL)_axAuditSetSwizzledImp:(void /* function */ *)a0 orOrigImp:(void /* function */ *)a1 forMethod:(struct objc_method { } *)a2 withSwizzling:(BOOL)a3;
+ (id)_axAuditGetCellReferenceMapTable;
+ (id)_accessibilityGetAllSubviews:(id)a0 withFiltering:(BOOL)a1;
+ (void)_axAuditUpdateRowHeightForTableAndCollectionViewsOfElements:(id)a0;
+ (void)_axAuditRemoveUIViewsFromArray:(id)a0 usingFilter:(id /* block */)a1;
+ (id)_axAuditFindFrontmostViewControllerForHierarchy:(id)a0;
+ (id)_axAuditFindElementsNotSupportingDynamicText:(id)a0;
+ (void)_axAuditStoreFontForElement:(id)a0 intoDictionary:(id)a1 forCurrentFont:(id)a2;
+ (void)_axAuditRemoveUnsupportedCategories:(id)a0;
+ (void)_axAuditSpinRunloopForDuration:(double)a0;
+ (void)_axAuditCheckElementForClipping:(id)a0 storeIntoSet:(id)a1;
+ (id)_axAuditFindDescendantInaccessibleElements:(id)a0 honorsGroups:(BOOL)a1;
+ (void)_axAuditCaptureReferenceToCellsForViewHierarchy:(id)a0;
+ (void)_axAuditUpdateReferenceOfCellsForViewHierarchy:(id)a0 forFontSize:(id)a1;
+ (id)_axAuditDereferenceCellsForViewHierarchy:(id)a0;
+ (void)_axAuditUIKitShouldReportFontSize:(id)a0;
+ (BOOL)_axAuditSwizzleAwayContentSize:(BOOL)a0;

@end
