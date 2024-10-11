@interface EBNameTable : NSObject

+ (void)readFromState:(id)a0;
+ (id)edNameFromXlName:(struct XlName { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; struct XlString *x2; struct XlString *x3; struct XlString *x4; struct XlString *x5; struct XlString *x6; char *x7; short x8; short x9; short x10; short x11; unsigned char x12; unsigned char x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; int x21; } *)a0 name:(struct OcText { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; BOOL x7; })a1 state:(id)a2;
+ (struct XlName { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; struct XlString *x2; struct XlString *x3; struct XlString *x4; struct XlString *x5; struct XlString *x6; char *x7; short x8; short x9; short x10; short x11; unsigned char x12; unsigned char x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; int x21; } *)xlNameFromEDName:(id)a0 state:(id)a1;
+ (struct XlNameTable { void /* function */ **x0; struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord **x0; struct XlRecord **x1; struct __compressed_pair<XlRecord **, ChAllocator<XlRecord *> > { struct XlRecord **x0; } x2; } x0; } x1; struct OcText { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; BOOL x7; } x2[14]; } *)createXlNameTableFromNamesCollection:(id)a0 state:(id)a1;

@end
