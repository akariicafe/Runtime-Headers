@class NSArray, NSDictionary;

@interface CHStrokeGroupQuery : CHQuery

@property (copy, nonatomic, setter=_setStrokeGroupItems:) NSArray *strokeGroupItems;
@property (copy, nonatomic, setter=_setStrokeGroupItemsByID:) NSDictionary *strokeGroupItemsByID;

- (void)dealloc;
- (id)debugName;
- (id)tokenizedStrokeResultForInitialStrokes:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 tokenizationLevel:(long long)a2 completion:(id /* block */)a3 shouldCancel:(id /* block */)a4;
- (void)q_updateQueryResult;
- (id)q_strokeGroupItemsFromSessionResult:(id)a0;
- (long long)q_itemTypeForStrokeGroup:(id)a0 recognitionResult:(id)a1;
- (id)tokenizedStrokeResultForInitialStrokes:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 tokenizationLevel:(long long)a2;

@end
