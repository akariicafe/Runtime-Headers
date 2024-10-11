@class NSString, HFPinCodeItem;

@interface _HUPinCodeActivityItemSource : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment>

@property (retain, nonatomic) HFPinCodeItem *pinCodeItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 attachmentNameForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPinCodeItem:(id)a0;

@end
