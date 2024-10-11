@class NSString;

@interface WLKContentRating : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long ratingValue;
@property (readonly, copy, nonatomic) NSString *contentRatingSystem;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long systemType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
