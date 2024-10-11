@interface PXPhotosGridToggleSharedLibraryBadgeActionPerformer : PXPhotosGridActionPerformer

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activityType;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (id)menuElement;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (long long)menuElementState;

@end
