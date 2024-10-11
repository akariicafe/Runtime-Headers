@interface NewsFeed.SharingTagTextActivityItemSource : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ itemTitle;
}

- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
