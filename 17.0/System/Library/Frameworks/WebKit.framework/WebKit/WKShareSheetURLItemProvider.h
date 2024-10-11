@interface WKShareSheetURLItemProvider : UIActivityItemProvider {
    struct RetainPtr<NSURL> { void *m_ptr; } _url;
    struct RetainPtr<LPLinkMetadata> { void *m_ptr; } _metadata;
}

- (id)initWithURL:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)item;
- (id)activityViewControllerLinkMetadata:(id)a0;

@end
