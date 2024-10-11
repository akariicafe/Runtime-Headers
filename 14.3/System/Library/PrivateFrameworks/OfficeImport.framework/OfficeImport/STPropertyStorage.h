@interface STPropertyStorage : NSObject {
    struct _SsrwPropertyStorage { } *m_pPropertyStorage;
}

- (void)close;
- (id)getDocumentPropertyWithId:(int)a0 propType:(int *)a1;
- (short)getShortDocumentPropertyWithId:(int)a0;
- (void)setDocumentPropertyWithId:(int)a0 to:(id)a1;
- (id)initWithPropertyStorage:(struct _SsrwPropertyStorage { } *)a0;
- (int)getLongDocumentPropertyWithId:(int)a0;
- (id)getStringDocumentPropertyWithId:(int)a0;
- (id)getDocumentPropertyWithName:(id)a0 propType:(int *)a1;
- (void)setLongDocumentPropertyWithId:(int)a0 to:(int)a1;
- (void)setShortDocumentPropertyWithId:(int)a0 to:(short)a1;
- (void)setStringDocumentPropertyWithId:(int)a0 to:(id)a1;
- (void)setBlobDocumentPropertyWithName:(id)a0 to:(id)a1;

@end
