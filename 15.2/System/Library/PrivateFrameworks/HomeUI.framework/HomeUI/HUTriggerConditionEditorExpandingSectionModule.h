@class HFItem, NSArray, HFStaticItemProvider, HFCondition, NSString, HMHome;

@interface HUTriggerConditionEditorExpandingSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>

@property (retain, nonatomic) HFStaticItemProvider *itemProvider;
@property (retain, nonatomic) HFItem *showOptionsItem;
@property (retain, nonatomic) NSArray *optionItems;
@property (retain, nonatomic) HFCondition *condition;
@property (retain, nonatomic) HFItem *selectedOptionItem;
@property (nonatomic) BOOL showOptions;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long conditionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionModuleForConditionType:(unsigned long long)a0 itemUpdater:(id)a1 home:(id)a2;

- (id)itemProviders;
- (id)sectionID;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)conditionTitle;
- (id)initWithItemUpdater:(id)a0 conditionType:(unsigned long long)a1 home:(id)a2;
- (void)_buildItemProvider;
- (BOOL)conditionIsDisabled;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)a0;
- (id)selectOptionItemForCondition:(id)a0;
- (id)selectOptionItem:(id)a0;
- (id)updateSelectionWithCondition:(id)a0;
- (BOOL)doesOptionItemRequireInitialUserConfiguration:(id)a0;
- (id)createNoConditionOptionItemWithTitle:(id)a0;
- (id)preferredConditionFromConditions:(id)a0;

@end
