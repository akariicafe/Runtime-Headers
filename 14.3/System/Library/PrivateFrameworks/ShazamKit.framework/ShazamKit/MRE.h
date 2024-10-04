@interface MRE : NSObject

@property (nonatomic) void *mreInstance;

- (void)dealloc;
- (id)initWithSignatures:(id)a0 density:(long long)a1 error:(id *)a2;
- (id)search:(id)a0 error:(id *)a1;
- (BOOL)FillUnknownError:(id *)a0;
- (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
- (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
- (id)initWithMREInstance:(struct MREInstance { struct unique_ptr<shazam::MMap, std::__1::default_delete<shazam::MMap> > { struct __compressed_pair<shazam::MMap *, std::__1::default_delete<shazam::MMap> > { struct MMap *x0; } x0; } x0; struct unique_ptr<Searcher, std::__1::default_delete<Searcher> > { struct __compressed_pair<Searcher *, std::__1::default_delete<Searcher> > { struct Searcher *x0; } x0; } x1; } *)a0 error:(id *)a1;
- (id)initWithBundle:(id)a0 cacheDir:(id)a1 density:(long long)a2 bufferSize:(long long)a3 error:(id *)a4;
- (id)initWithBundle:(id)a0 cacheDir:(id)a1 density:(long long)a2 error:(id *)a3;
- (id)metadataForSongId:(id)a0 error:(id *)a1;

@end
