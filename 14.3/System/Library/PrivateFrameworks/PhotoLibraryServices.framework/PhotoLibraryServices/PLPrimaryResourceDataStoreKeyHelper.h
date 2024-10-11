@interface PLPrimaryResourceDataStoreKeyHelper : NSObject {
    char *originalsBaseData;
    char *rendersBaseData;
    char *derivativesBaseData;
    char *masterThumbsBaseData;
    char *masterThumbFilenameData;
    char *bundleBaseData;
}

- (id)initWithPathManager:(id)a0;
- (void)dealloc;

@end
