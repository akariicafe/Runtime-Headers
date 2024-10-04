@class NSString;

@interface EspressoDataFrameMappedFile : NSObject {
    int file_id;
    unsigned long long length;
}

@property (retain) NSString *path;
@property char *basePtr;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
