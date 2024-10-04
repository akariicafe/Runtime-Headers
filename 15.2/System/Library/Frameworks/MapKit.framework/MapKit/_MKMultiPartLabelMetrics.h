@class NSArray, NSAttributedString, NSMutableAttributedString;

@interface _MKMultiPartLabelMetrics : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *originalAttributedString;
@property (readonly, copy, nonatomic) NSArray *separators;
@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly, nonatomic) NSMutableAttributedString *attributedString;
@property (nonatomic) unsigned long long currentSeparatorIndex;

- (BOOL)_shiftLocationOfStrings:(id)a0 startingAtIndex:(unsigned long long)a1 shiftValue:(long long)a2;
- (void).cxx_destruct;
- (id)initWithMultiPartString:(id)a0;
- (BOOL)replaceSeparatorAtIndex:(unsigned long long)a0 withString:(id)a1;
- (void)reset;

@end
