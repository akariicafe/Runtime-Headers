@class NSString;
@protocol NSCopying;

@interface PKSwitchTableViewSettingsRow : NSObject <PKTableViewSettingsRow>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id value;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSCopying> identifier;

+ (id)cellReuseIdentifier;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldHighlight;
- (void)_switchValueChanged:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 value:(BOOL)a2 changeHandler:(id /* block */)a3;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;

@end
