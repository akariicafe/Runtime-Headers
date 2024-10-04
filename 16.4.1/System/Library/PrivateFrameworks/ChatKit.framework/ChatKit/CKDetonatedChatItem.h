@interface CKDetonatedChatItem : CKMessagePartChatItem

- (BOOL)canCopy;
- (BOOL)canForward;
- (id)dragItemProvider;
- (BOOL)isSensitive;
- (BOOL)canExport;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (BOOL)canAttachStickers;
- (BOOL)canPerformQuickAction;
- (BOOL)canSendAsTextMessage;
- (id)momentShareURL;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
