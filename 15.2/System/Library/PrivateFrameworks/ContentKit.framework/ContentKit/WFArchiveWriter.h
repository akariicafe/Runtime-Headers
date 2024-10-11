@interface WFArchiveWriter : NSObject

@property (readonly, nonatomic) struct archive { } *archive;

- (BOOL)finishWithError:(id *)a0;
- (void)dealloc;
- (id)initWithDestinationURL:(id)a0 format:(id)a1 error:(id *)a2;
- (BOOL)writeArchiveEntry:(id)a0 error:(id *)a1;

@end
