@class NSString;

@interface PXGNamedImageViewConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long contentMode;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
