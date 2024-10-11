@class UIImage, NSString;
@protocol AVTAvatarRecord;

@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem>

@property (readonly, nonatomic) id<AVTAvatarRecord> avatar;
@property (weak, nonatomic) UIImage *cachedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downcastWithRecordHandler:(id /* block */)a0 viewHandler:(id /* block */)a1;
- (void)downcastWithRecordHandler:(id /* block */)a0 imageHandler:(id /* block */)a1 viewHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAvatar:(id)a0;

@end
