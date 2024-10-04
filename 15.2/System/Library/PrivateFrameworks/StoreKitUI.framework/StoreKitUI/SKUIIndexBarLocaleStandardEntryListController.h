@class NSSet, SKUIIndexBarEntryListViewElement, IKViewElementStyle;

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController {
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(long long)a0;
- (long long)numberOfEntryDescriptors;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;
- (void)reloadViewElementData;
- (id)initWithSKUIIndexBarEntryListViewElement:(id)a0;

@end
