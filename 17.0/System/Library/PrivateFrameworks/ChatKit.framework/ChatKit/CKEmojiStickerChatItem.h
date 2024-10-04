@class IMEmojiSticker;

@interface CKEmojiStickerChatItem : CKAssociatedStickerChatItem

@property (readonly, nonatomic) IMEmojiSticker *emojiSticker;

- (Class)cellClass;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (id)sticker;
- (id)IMEmojiStickerChatItem;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
