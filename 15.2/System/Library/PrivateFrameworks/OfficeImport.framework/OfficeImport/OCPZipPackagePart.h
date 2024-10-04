@class OISFUZipEntry;

@interface OCPZipPackagePart : OCPPackagePart

@property (readonly, nonatomic) OISFUZipEntry *zipEntry;

- (void).cxx_destruct;
- (id)data;
- (struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)xmlDocument;
- (struct _xmlTextReader { } *)xmlReader;
- (void)copyToFile:(id)a0;
- (id)initWithArchive:(id)a0 location:(id)a1 package:(id)a2;

@end
