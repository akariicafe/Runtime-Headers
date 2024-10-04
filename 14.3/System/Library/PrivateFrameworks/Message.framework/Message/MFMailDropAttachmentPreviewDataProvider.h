@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider

+ (id)fullResolutionStorageLocationForAttachmentWithMimePart:(id)a0 withMessage:(id)a1;
+ (id)fullResolutionAttachmentURLForAttachmentURL:(id)a0;
+ (id)fullResolutionAttachmentForAttachment:(id)a0;

- (void)fetchDataForAttachment:(id)a0 consumer:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
- (id)storageLocationForAttachment:(id)a0 withMessage:(id)a1;

@end
