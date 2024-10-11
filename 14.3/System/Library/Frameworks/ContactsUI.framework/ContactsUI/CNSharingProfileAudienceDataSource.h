@class NSArray, CNSharingProfileRowItem, NSString;

@interface CNSharingProfileAudienceDataSource : NSObject <CNSharingProfileSectionDataSource>

@property (nonatomic) BOOL shouldShowEveryone;
@property (retain, nonatomic) NSArray *valuesArray;
@property (retain, nonatomic) CNSharingProfileRowItem *selectedItem;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long selectedSharingAudience;
@property (readonly, nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(unsigned long long)a0;
- (BOOL)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;
- (id)itemForIndex:(unsigned long long)a0;
- (id)initWithSelectedSharingAudience:(unsigned long long)a0;
- (unsigned long long)sharingAudienceForItem:(id)a0;
- (unsigned long long)indexForSharingAudience:(unsigned long long)a0;
- (unsigned long long)sharingAudienceForIndex:(unsigned long long)a0;
- (void)reloadItems;

@end
