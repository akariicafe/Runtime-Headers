@class REClassLoader;

@interface REDataSourceLoader : NSObject <NSCopying> {
    REClassLoader *_loader;
}

+ (id)dataSourceLoaderWithBlock:(id /* block */)a0;
+ (id)dataSourceLoaderWithDataSources:(id)a0;
+ (id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)a0;
+ (id)dataSourceLoaderWithDirectories:(id)a0 dataSourceKey:(id)a1;
+ (id)dataSourceLoaderWithDirectories:(id)a0;
+ (id)disabledDataSourceLoader;
+ (id)defaultDataSourceLoader;
+ (id)dataSourceLoaderWithDirectory:(id)a0;

- (void)prewarm;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateDataSourceClassesWithBlock:(id /* block */)a0;
- (void)enumerateBundleConfigurations:(id /* block */)a0;
- (void)enumerateDataSourceObjectsWithBlock:(id /* block */)a0;

@end
