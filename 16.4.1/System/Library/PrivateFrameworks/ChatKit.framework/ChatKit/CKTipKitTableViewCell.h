@class NSString, TPKContentView;

@interface CKTipKitTableViewCell : UITableViewCell

@property (class, readonly, nonatomic) NSString *identifier;

@property (retain, nonatomic) TPKContentView *tipKitContentView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
