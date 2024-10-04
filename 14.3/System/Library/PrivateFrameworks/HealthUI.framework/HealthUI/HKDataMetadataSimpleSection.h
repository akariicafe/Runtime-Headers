@class NSString, NSMutableArray;

@interface HKDataMetadataSimpleSection : HKDataMetadataSection <HKDataMetadataSectionDataReceiver>

@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *rows;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)sectionTitle;
- (void)addText:(id)a0 detail:(id)a1;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)_rowTitles;
- (id)_valueForRowWithTitle:(id)a0;

@end
