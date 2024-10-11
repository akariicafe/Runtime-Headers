@protocol NUImageProperties;

@interface NUImagePropertiesJob : NURenderJob {
    id<NUImageProperties> _imageProperties;
}

- (id)result;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;

@end
