@class NSString, NSURL;

@interface BCSCopyActionPickerItem : BCSActionPickerItem

@property (readonly, copy, nonatomic) NSString *textToCopy;
@property (readonly, copy, nonatomic) NSURL *urlToCopy;

- (id)icon;
- (void).cxx_destruct;
- (BOOL)isCopyActionItem;
- (void)performActionWithFBOptions:(id)a0;
- (id)initWithAction:(id)a0 textToCopy:(id)a1;
- (id)initWithAction:(id)a0 urlToCopy:(id)a1;

@end
