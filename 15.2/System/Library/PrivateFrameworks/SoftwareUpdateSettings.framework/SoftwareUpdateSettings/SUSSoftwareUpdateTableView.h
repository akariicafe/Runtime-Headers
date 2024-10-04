@class NSString, UIActivityIndicatorView, UILabel, NSDate;

@interface SUSSoftwareUpdateTableView : UITableView

@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) UILabel *checkingStatusLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSString *currentVersion;
@property (retain, nonatomic) NSDate *lastScannedDate;
@property BOOL updatesDeferred;
@property BOOL suPathsRestricted;
@property (nonatomic) int state;
@property BOOL disableScanUI;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)preferredContentSizeChanged:(id)a0;
- (void).cxx_destruct;
- (id)upToDateText;
- (id)upToDateManagedText;
- (id)upToDateWithAlternate;

@end
