@interface CKStewieTranscriptResumeButtonsChatItem : CKStampLabelChatItem

- (Class)cellClass;
- (BOOL)isEmergency;
- (id)chatIdentifier;
- (id)imStewieResumeItem;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptText;
- (BOOL)shouldShowStewieTextButton;

@end
