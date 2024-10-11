@protocol PXSharedLibrary;

@interface PXSharedLibraryDeclineInvitationActionPerformer : PXActionPerformer

@property (retain, nonatomic) id<PXSharedLibrary> invitation;

- (void)performUserInteractionTask;
- (id)init;
- (void).cxx_destruct;
- (void)performActionWithInvitation:(id)a0 presentationEnvironment:(id)a1 completionHandler:(id /* block */)a2;

@end
