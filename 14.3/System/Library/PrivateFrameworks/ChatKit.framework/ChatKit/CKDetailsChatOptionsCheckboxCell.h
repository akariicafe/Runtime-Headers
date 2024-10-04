@class NSString, UISwitch;

@interface CKDetailsChatOptionsCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell>

@property (retain, nonatomic) UISwitch *controlSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldHighlight;
+ (id)reuseIdentifier;

@end
