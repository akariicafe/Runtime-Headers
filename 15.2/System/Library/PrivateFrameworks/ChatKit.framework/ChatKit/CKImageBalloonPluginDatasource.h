@class CKMediaObject, CKBalloonView;

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) CKMediaObject *mediaObject;

- (id)initWithPluginPayload:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)imageBalloon;
- (void)previewDidChange:(id)a0;

@end
