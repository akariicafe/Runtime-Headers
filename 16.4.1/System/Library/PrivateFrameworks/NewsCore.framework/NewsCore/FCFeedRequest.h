@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) long long feedBin;
@property (copy, nonatomic) FCFeedRange *feedRange;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) FCFeedItemFeature *requiredFeature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
