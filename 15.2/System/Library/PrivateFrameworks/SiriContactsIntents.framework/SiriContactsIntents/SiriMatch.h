@class NSString;

@interface SiriMatch : INObject

@property (nonatomic, copy) NSString *fullName;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
