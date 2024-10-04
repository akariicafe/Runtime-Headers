@interface PhotosUIApps.PUXStoryExportActivityItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ storyConfiguration;
    void /* unknown type, empty encoding */ aspectRatio;
    void /* unknown type, empty encoding */ destinationURL;
    void /* unknown type, empty encoding */ exportManager;
    void /* unknown type, empty encoding */ iconAsset;
    void /* unknown type, empty encoding */ fullSizePlayerExtendedTraitCollectionSnapshot;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ progressController;
}

@property (nonatomic, readonly) id item;

- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)initWithPlaceholderItem:(id)a0;
- (void)cancel;

@end
