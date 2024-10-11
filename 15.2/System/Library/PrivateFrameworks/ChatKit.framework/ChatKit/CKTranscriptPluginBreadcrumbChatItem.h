@class UIImage, IMTranscriptPluginBreadcrumbChatItem, CKTranscriptPluginChatItem;

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampChatItem

@property (readonly, nonatomic) IMTranscriptPluginBreadcrumbChatItem *IMChatItem;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSizePlusHorizontalPadding;
@property (retain, nonatomic) CKTranscriptPluginChatItem *previousPluginChatItem;

- (unsigned long long)layoutType;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void).cxx_destruct;
- (BOOL)_wantsCenteredOrientation;
- (BOOL)_wantsIconImage;
- (char)transcriptOrientation;
- (unsigned long long)_breadcrumbOptionFlags;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)loadTranscriptText;
- (Class)cellClass;

@end
