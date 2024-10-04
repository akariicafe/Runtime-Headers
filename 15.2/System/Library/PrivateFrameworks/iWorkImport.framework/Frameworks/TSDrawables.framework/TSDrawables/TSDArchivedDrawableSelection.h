@class NSString, TSKSelection;

@interface TSDArchivedDrawableSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)saveToArchiver:(id)a0 intoMessage:(void *)a1;

@end
