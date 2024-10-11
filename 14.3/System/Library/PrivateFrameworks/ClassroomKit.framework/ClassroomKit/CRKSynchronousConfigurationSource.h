@protocol CRKConfigurationSource;

@interface CRKSynchronousConfigurationSource : NSObject {
    id<CRKConfigurationSource> mBaseSource;
}

- (void).cxx_destruct;
- (id)initWithConfigurationSource:(id)a0;
- (id)configurationWithError:(id *)a0;
- (BOOL)setConfiguration:(id)a0 error:(id *)a1;

@end
