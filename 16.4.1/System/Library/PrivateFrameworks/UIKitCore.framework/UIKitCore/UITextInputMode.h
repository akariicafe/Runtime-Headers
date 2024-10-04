@class NSArray, NSString;

@interface UITextInputMode : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *activeInputModes;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *primaryLanguage;

+ (id)currentInputMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
