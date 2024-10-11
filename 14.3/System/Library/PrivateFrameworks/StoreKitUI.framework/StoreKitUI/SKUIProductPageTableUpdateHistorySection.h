@class SKUIColorScheme, NSArray, SKUIClientContext, SKUILayoutCache, NSMutableIndexSet, NSDateFormatter, SKUIProductPageTableExpandableHeaderView;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSDateFormatter *_dateFormatter;
}

@property (nonatomic) long long firstStringIndex;
@property (copy, nonatomic) NSArray *releaseNotes;
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)_reloadHeaderView;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (id)headerViewForTableView:(id)a0;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;

@end
