@class TPLayoutState;

@interface TPArchivedLayoutState : TSPObject

@property (copy, nonatomic) TPLayoutState *layoutState;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 layoutState:(id)a1;
- (BOOL)isEqualToArchivedLayoutState:(id)a0;

@end
