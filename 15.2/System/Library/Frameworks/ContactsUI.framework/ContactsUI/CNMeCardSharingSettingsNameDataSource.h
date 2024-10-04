@class NSArray, NSString, CNContact;

@interface CNMeCardSharingSettingsNameDataSource : NSObject <CNMeCardSharingSectionDataSource>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *formattedName;
@property (readonly, nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void)didSelectItemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)itemForIndex:(unsigned long long)a0;
- (BOOL)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;

@end
