@class NSMutableDictionary;

@interface TCBundleResourceManager : NSObject {
    NSMutableDictionary *mPackageMap;
}

+ (id)instance;
+ (void)disposeInstance;

- (void).cxx_destruct;
- (id)init;
- (id)packageWithName:(id)a0 cacheResult:(BOOL)a1;
- (id)dataForResource:(id)a0 ofType:(id)a1 inPackage:(id)a2 cacheResult:(BOOL)a3;
- (struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)xmlDocumentForResource:(id)a0 ofType:(id)a1 inPackage:(id)a2 cacheResult:(BOOL)a3;

@end
