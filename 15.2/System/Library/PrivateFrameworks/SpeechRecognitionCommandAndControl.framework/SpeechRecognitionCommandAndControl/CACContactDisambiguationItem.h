@class NSString, CNLabeledValue, CNContact;

@interface CACContactDisambiguationItem : CACDisambiguationItem

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNLabeledValue *contactLabeledValue;
@property (readonly) NSString *contactDisplayLabel;
@property (readonly) NSString *contactDisplayValue;

- (id)displayName;
- (id)displayDescription;
- (void).cxx_destruct;
- (void)startInteraction;
- (id)initWithContact:(id)a0 labeledValue:(id)a1 type:(long long)a2;

@end
