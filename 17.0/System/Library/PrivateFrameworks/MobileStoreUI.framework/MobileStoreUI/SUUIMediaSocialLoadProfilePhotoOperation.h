@class NSLock, SUUIMediaSocialProfile, SUUIClientContext;

@interface SUUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation {
    SUUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    SUUIMediaSocialProfile *_profile;
}

@property (copy) id /* block */ outputBlock;

- (void)main;
- (void).cxx_destruct;
- (void)_fetchMonogram;
- (void)_fetchPhoto;
- (void)_fetchProfile;
- (void)_returnPhoto:(id)a0 isFinal:(BOOL)a1;
- (id)_silhouette;
- (id)initWithClientContext:(id)a0;

@end
