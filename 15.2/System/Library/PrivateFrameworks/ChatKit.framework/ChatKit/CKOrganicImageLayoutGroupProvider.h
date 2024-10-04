@class NSString;

@interface CKOrganicImageLayoutGroupProvider : NSObject <CKTranscriptCustomLayoutGroupProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layoutGroupForDatasourceItems:(id)a0 environment:(id)a1 layoutItems:(id)a2;
- (double)_setLayoutRecipesForChatItems:(id)a0;
- (id)_startOffsetSpecForCount:(unsigned long long)a0;
- (unsigned long long)_orientationForChatItemSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_targetSizeForChatItem:(id)a0 totalItemCount:(unsigned long long)a1;
- (id)_startRotationSpec;
- (double)_rotationForChatItem:(id)a0 leftRotated:(BOOL)a1;
- (id)_intersectSpecForIndex:(unsigned long long)a0 count:(unsigned long long)a1;
- (double)scalarForSize:(struct CGSize { double x0; double x1; })a0 count:(unsigned long long)a1;

@end
