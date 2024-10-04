@class UIColor;

@interface VUIScoreboardRowLayout : NSObject

@property (nonatomic) int backgroundBlendMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) int separatorBlendMode;
@property (retain, nonatomic) UIColor *separatorColor;

+ (id)_backgroundColorForIdiom:(long long)a0;
+ (int)_backgroundColorBlendMode;
+ (id)_topRowLayoutForIdiom:(long long)a0;
+ (id)_bottomLayoutForIdiom:(long long)a0;

- (void).cxx_destruct;

@end
