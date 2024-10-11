@class NSString;

@interface IMDiskSpaceFileManagerFileInfo : IMDiskSpaceFileInfo

@property (readonly, nonatomic) unsigned long long purgableFlags;
@property (readonly, nonatomic) NSString *purgableFlagsString;

- (void).cxx_destruct;
- (void)addLogItems:(id)a0;
- (id)initWithPath:(id)a0 fileSize:(struct IMFileSize { unsigned long long x0; unsigned long long x1; })a1 isDirectory:(BOOL)a2 isAttachment:(BOOL)a3 isSyncAsset:(BOOL)a4 isSticker:(BOOL)a5 purgableFlags:(unsigned long long)a6;

@end
