@interface UIStatusBarLockScreenForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBatteryInsides;
- (double)textOffsetForStyle:(long long)a0;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)a0;
- (id)makeTextFontForStyle:(long long)a0;
- (id)expandedNameForImageName:(id)a0;
- (double)sizeForMoonMaskVisible:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsShowingBuildVersion;

@end
