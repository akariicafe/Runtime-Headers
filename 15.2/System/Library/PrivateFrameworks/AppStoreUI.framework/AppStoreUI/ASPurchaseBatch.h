@interface ASPurchaseBatch : SUPurchaseBatch

- (void /* function */ *)errorEqualCallback;
- (id)copyFilteredItemsFromItems:(id)a0;
- (id)everythingFailedErrorForError:(id)a0;
- (id)mergedErrorForError:(id)a0 withCount:(long long)a1;
- (id)_copyItemsByStorefrontFromItems:(id)a0;
- (id)_tooBigForNetworkErrorForError:(id)a0 withCount:(long long)a1;

@end
