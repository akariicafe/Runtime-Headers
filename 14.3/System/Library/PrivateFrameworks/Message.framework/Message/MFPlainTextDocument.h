@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {
    NSMutableString *_text;
    NSMutableArray *_fragments;
}

- (void).cxx_destruct;
- (unsigned long long)fragmentCount;
- (id)string;
- (void)getFormatFlowedString:(id *)a0 insertedTrailingSpaces:(BOOL *)a1 encoding:(unsigned int)a2;
- (id)quotedString:(unsigned int)a0;
- (void)getString:(id *)a0 quoteLevel:(unsigned int *)a1 ofFragmentAtIndex:(unsigned long long)a2;
- (void)appendString:(id)a0 withQuoteLevel:(unsigned int)a1;
- (id)archivedRepresentation;
- (void)appendArchivedRepresentation:(id)a0;

@end
