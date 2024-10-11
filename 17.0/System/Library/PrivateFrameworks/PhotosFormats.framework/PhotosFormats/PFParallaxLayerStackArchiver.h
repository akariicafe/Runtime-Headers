@interface PFParallaxLayerStackArchiver : NSObject

+ (void)initialize;
+ (id)loadCompoundLayerStackFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)saveCompoundLayerStack:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
