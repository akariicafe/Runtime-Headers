@class NSString, UIFont, UIColor;

@interface TVMonogramImageConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) double diameter;
@property (nonatomic) double focusedSizeIncrease;
@property (retain, nonatomic) UIColor *textColor;

- (id)initWithStyle:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
