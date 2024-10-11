@interface CNUIFamilyMemberControllerShared : NSObject

+ (id)addContactsToWhitelistOptionsSheetForFamilyMember:(id)a0 offerChooseFromFamilyMemberContactsOption:(BOOL)a1 delegate:(id)a2;
+ (id)formattedNameOfFamilyMember:(id)a0;
+ (id)contactViewControllerForContact:(id)a0 fromStore:(id)a1;
+ (id)contactMatchingFamilyMemberContactItem:(id)a0 fetchedFromContactStore:(id)a1 schedulerProvider:(id)a2;
+ (id)addContactsOptionsSheetForFamilyMember:(id)a0 delegate:(id)a1;
+ (long long)contactsUIFetchStatusFromContactsUICoreFetchStatus:(long long)a0;

@end
