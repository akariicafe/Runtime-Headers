@class UILabel, UIDateLabel;

@interface CKBlackholeConversationListCell : UITableViewCell

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)configureForConversation:(id)a0;

@end
