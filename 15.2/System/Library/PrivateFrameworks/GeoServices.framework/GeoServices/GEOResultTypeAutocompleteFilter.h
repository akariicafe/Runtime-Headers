@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter>

@property (readonly, nonatomic) unsigned long long types;

- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (id)initWithResultTypes:(unsigned long long)a0;
- (id)init;

@end
