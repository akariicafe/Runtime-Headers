@interface _UIActivityItemMapping : NSObject

+ (void)_addToActiveActivityViewControllers:(id)a0;
+ (id)_activityViewControllerForActivityItem:(id)a0;
+ (void)_clearActivityItems:(id)a0;
+ (void)_removeFromActiveActivityViewControllers:(id)a0;
+ (void)_addActivityItem:(id)a0 activityViewController:(id)a1 originalActivityItem:(id)a2;
+ (id)_thumbnailImageDataForActivityItem:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1 activityType:(id)a2;
+ (id)_openURLAnnotationForActivityItem:(id)a0 activityType:(id)a1;
+ (id)_itemProviderForActivityItem:(id)a0 typeIdentifier:(id)a1 thumbnailSize:(struct CGSize { double x0; double x1; })a2 activityType:(id)a3;
+ (id)_activeActivityViewControllers;
+ (id)_subjectForActivityItem:(id)a0 activityType:(id)a1;
+ (id)_dataTypeIdentifierForActivityItem:(id)a0 activityType:(id)a1;
+ (id)_thumbnailImageForActivityItem:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1 activityType:(id)a2;
+ (id)_attachmentNameForActivityItem:(id)a0 activityType:(id)a1;

@end
