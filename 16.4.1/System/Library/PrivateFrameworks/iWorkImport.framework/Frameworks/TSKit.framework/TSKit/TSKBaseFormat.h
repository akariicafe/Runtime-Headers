@interface TSKBaseFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) unsigned char base;
@property (readonly, nonatomic) unsigned char basePlaces;
@property (readonly, nonatomic) BOOL baseUseMinusSign;

+ (id)defaultHexadecimalFormat;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asBaseFormat;
- (id)initWithBase:(unsigned char)a0 basePlaces:(unsigned char)a1 baseUseMinusSign:(BOOL)a2;

@end
