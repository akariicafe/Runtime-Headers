@class NSString, UITableViewCell;
@protocol HKDataMetadataDeletionSectionDelegate;

@interface HKDataMetadataDeletionSection : HKDataMetadataSection

@property (retain, nonatomic) UITableViewCell *cell;
@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) id<HKDataMetadataDeletionSectionDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)initWithTitle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)_updateCellForEnabledState;

@end
