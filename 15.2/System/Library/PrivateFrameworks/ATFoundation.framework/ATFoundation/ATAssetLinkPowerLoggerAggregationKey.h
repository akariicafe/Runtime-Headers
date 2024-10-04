@class NSString;

@interface ATAssetLinkPowerLoggerAggregationKey : NSObject <NSCopying>

@property (readonly, nonatomic) long long linkType;
@property (readonly, nonatomic) NSString *dataclass;
@property (readonly, nonatomic) NSString *assetType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithLinkType:(long long)a0 dataclass:(id)a1 assetType:(id)a2;

@end
