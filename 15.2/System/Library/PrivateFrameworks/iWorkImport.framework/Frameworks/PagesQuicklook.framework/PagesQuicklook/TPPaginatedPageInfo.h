@class NSArray, TPDrawablesZOrder;
@protocol TPPageLayoutInfoProvider;

@interface TPPaginatedPageInfo : TPPageInfo <TSKModelRootIndexProvider>

@property (readonly, weak, nonatomic) id<TPPageLayoutInfoProvider> layoutInfoProvider;
@property (readonly, nonatomic) NSArray *floatingDrawableInfos;
@property (readonly, nonatomic) TPDrawablesZOrder *drawablesZOrder;
@property (readonly, nonatomic) BOOL isDocumentSetupPage;

+ (Class)bodyInfoClass;

- (id)pageController;
- (void).cxx_destruct;
- (Class)repClass;
- (Class)layoutClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;
- (long long)modelRootIndex;
- (id)orderedDrawables:(id)a0;
- (id)initWithPageIndex:(unsigned long long)a0 documentRoot:(id)a1 layoutInfoProvider:(id)a2;

@end
