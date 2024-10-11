@class NSString, MFMailMessage;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    MFMailMessage *_message;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataForAttachment:(id)a0 consumer:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
- (id)messageForAttachment:(id)a0;
- (void)dealloc;
- (id)fetchLocalDataForAttachment:(id)a0;
- (id)storageLocationForAttachment:(id)a0 withMessage:(id)a1;
- (id)initWithDecryptedMessage:(id)a0;

@end
