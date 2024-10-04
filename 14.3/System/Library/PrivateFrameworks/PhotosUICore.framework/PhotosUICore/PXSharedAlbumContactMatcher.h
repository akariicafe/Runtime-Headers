@class CNContactStore, NSCache;

@interface PXSharedAlbumContactMatcher : NSObject {
    CNContactStore *_contactStore;
    NSCache *_avatarRendererByContactImageDiameter;
    NSCache *_contactIdentifiersBySubscriberIdentifiers;
    NSCache *_contactPhotosCache;
}

+ (id)sharedMatcher;

- (id)init;
- (void).cxx_destruct;
- (void)requestContactPhotoForContact:(id)a0 diameter:(double)a1 resultHandler:(id /* block */)a2;
- (id)contactsMatchingSubscriberInfos:(id)a0 keysToFetch:(id)a1;
- (void)_observeContactStoreNotifications;
- (id)_fetchContactMatchingIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)_fetchContactsMatchingIdentifiers:(id)a0 keysToFetch:(id)a1;
- (id)_fetchContactMatchingSubscriberInfo:(id)a0 keysToFetch:(id)a1;
- (void)contactsDidChange:(id)a0;

@end
