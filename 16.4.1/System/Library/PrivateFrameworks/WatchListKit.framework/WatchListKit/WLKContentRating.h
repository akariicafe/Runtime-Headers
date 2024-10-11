@class NSString;

@interface WLKContentRating : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long ratingValue;
@property (readonly, copy, nonatomic) NSString *contentRatingSystem;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long systemType;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
